/*
    MD Rifat Hossain

    Institute:- BAIUST
    Country:- BANGLADESH
*/

#include <bits/stdc++.h>
using namespace std;

#define OLD_MAXTAN                 \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long
#define ld long double
#define yes "YES"
#define no "NO"
#define PI 3.1415926535897932384626433832795

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    // Creating a map to store the replacement values
    unordered_map<char, char> rep;

    for (int i = 0; i < n; i++) {
        if (rep.find(s[i]) == rep.end()) {
            if (i % 2 == 0)
                rep[s[i]] = '0';
            else
                rep[s[i]] = '1';
        }
        s[i] = rep[s[i]];
    }

    int flag = 0;
    for (int i = 1; i < n; i++) {
        if (s[i] == s[i - 1]) {
            flag = 1;
            break;
        }
    }

    if (flag)
        cout << no;
    else
        cout << yes;
}

int main() {
    OLD_MAXTAN
    int t;
    cin >> t;
    while (t--) {
        solve();
        cout << "\n";
    }
    return 0;
}
