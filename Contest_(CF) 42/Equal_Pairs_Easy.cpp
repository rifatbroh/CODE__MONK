/*
    MD Rifat 
    
    country Bangladesh
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        map<int, int> mp;
        int cnt = 0;

        for (int i = 0; i < n; i++) {
            cin >> v[i];
            if (v[i] == 0)
                cnt++;
            else
                mp[v[i]]++;
        }

        int mx = 0;
        int count = 0;
        for (auto x : mp) {
            if (x.second > mx) {
                mx = x.second;
                count = x.first;
            }
        }
        mp[count] += cnt;
        int ans = 0;
        for (auto x : mp) {
            ans += (x.second * (x.second - 1)) / 2;
        }
        cout << ans << endl;
    }
    return 0;
}
