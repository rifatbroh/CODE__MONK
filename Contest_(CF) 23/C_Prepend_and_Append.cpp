/*
    MD Rifat 
    
    country Bangladesh
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        reverse(s.begin(), s.end());

        int l = 0, r = n-1;
        // while(l < r){
        //     if (s[l] != s[r]){
        //         l++;
        //         r--;
        //     }
        // }
        while(l < r && s[l] != s[r]){
            l++;
            r--;
        }
        int path = r-l+1;
        cout << path <<endl;
    }
    return 0;
}