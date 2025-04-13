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
    cin.ignore();
    
    while(t--) {
        string s;
        getline(cin, s);

        string ans ;
        ans += s[0];
        for (int i=0; i<s.size(); i++) {
            if (s[i] == ' ' && i+1 < s.size()) {
                ans += s[i+1];
            }
        }
        cout << ans << endl;
    }
    return 0;
}