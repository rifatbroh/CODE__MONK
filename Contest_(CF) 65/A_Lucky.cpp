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

    while(t--) {
        string s;
        cin >> s;

        int a=0,b=0;
        for (int i=0; i<s.size(); i++) {
            int num = s[i]-'0';
            if (i<3)
                a+=num;
            else
                b+=num;
        }
        if (a==b) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}