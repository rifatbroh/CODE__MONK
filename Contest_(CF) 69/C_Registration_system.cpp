/*
    MD Rifat 
    
    country Bangladesh
*/

#include<bits/stdc++.h>
using namespace std;
void solve() {
        int n, i;
        cin >> n;
        map<string,int> m;
        while(n--) {
                string s;
                cin >> s;
                if(m[s]) {
                        cout << s << m[s] << endl;
                } else {
                        cout << "OK" << endl;
                }
                m[s]++;
        }
}
int main()
{
    solve();
    return 0;
}