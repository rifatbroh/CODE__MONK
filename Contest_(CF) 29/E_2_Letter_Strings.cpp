/*
    MD Rifat Hossain
    Bangladesh
*/

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        
        vector<string> s(n);
        for (int i = 0; i < n; i++) cin >> s[i];

        map<string, ll> cnt;
        map<char, ll> first, second;

        for (const auto &str : s) {
            cnt[str]++;
            first[str[0]]++;
            second[str[1]]++;
        }

        ll res = 0;
        for (const auto &str : s) {
            first[str[0]]--;
            second[str[1]]--;
            cnt[str]--;

            res += first[str[0]] + second[str[1]] - 2 * cnt[str];
        }

        cout << res << endl;
    }
    return 0;
}
