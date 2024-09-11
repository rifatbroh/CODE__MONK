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
        string a, b, c;
        cin >> a >> b >> c;

        int flag = 0;
        for (int i=0; i<n; i++){
            if(a[i] != c[i] && b[i] != c[i]){
                flag = 1;
                break;
            }
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}