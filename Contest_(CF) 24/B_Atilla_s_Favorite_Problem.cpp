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
    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        int mx = 0;
        for (int i=0; i<s.size(); i++){
            int alpha = s[i] - 'a';
            mx = max(mx, alpha);
        }
        cout << mx+1 <<endl;
    }
    return 0;
}