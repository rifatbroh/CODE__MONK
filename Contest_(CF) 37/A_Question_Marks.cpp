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
        int freq[4] = {0};

        for(int i = 0; i <s.size(); i++) {
            if(s[i] != '?') {
                freq[s[i] - 'A']++;
            }
        }
        int mx = 0;
        for(int i = 0; i < 4; i++) {
            mx += min(n, freq[i]);
        }
        cout << mx << endl;
    }
}