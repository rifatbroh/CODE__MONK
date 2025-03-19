/*
    MD Rifat 
    
    country Bangladesh
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    int cnt = 0, n = s.size();
    for (int i=0; i<n; i++) {
        for (int j=i+1; j<n; j++) {
            for (int k=j+1; k<n; k++) {
                if ((s[i]=='A' && s[j]=='B' && s[k]=='C') && (j-i == k-j))
                    cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}