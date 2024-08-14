/*
    Md Rifat Hossain
*/

#include <bits/stdc++.h>
using namespace std;

vector<bool> prime(201, true);

void sieve() {
    prime[0] = prime[1] = false;
    for (int i = 2; i * i <= 200; i++) {
        if (prime[i]) {
            for (int j = i * i; j <= 200; j += i) {
                prime[j] = false;
            }
        }
    }
}

void solve() {
    int s;
    cin >> s;

    vector<int> v(s);
    for (int i = 0; i < s; i++) cin >> v[i];

    map<int, vector<int>> mp;
    for (int i = 0; i < s; i++) {
        mp[v[i]].push_back(i + 1);
    }

    for (auto& [val1, idxs1] : mp) {
        for (auto& [val2, idxs2] : mp) {
            if (val1 < val2) {
                int sum = val1 + val2;
                if (!prime[sum]) {
                    cout << idxs2[0] << " " << idxs1[0];
                    return;
                }
            }
            else if (val1 == val2 && idxs1.size() > 1) {
                int sum = val1 + val2;
                if (!prime[sum]) {
                    cout << idxs1[0] << " " << idxs1[1];
                    return;
                }
            }
        }
    }

    cout << -1;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    sieve();

    int t;
    cin >> t;
    while (t--) {
        solve();
        cout << endl;
    }

    return 0;
}
