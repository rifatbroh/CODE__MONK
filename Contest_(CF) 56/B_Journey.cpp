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
#define yes cout << "YES"
#define no cout << "NO"
#define pb push_back
#define vi vector<int>
#define vp vector<pair<int, int>>
#define mp map<int, int>
#define vec(v) v.begin(), v.end()
/* !    !   !   !   !   !   !   */
#define PI 3.1415926535897932384626433832795

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

void solve() {
    int t;
    cin >> t;

    while (t--) {
        ll n, a, b, c;
        cin >> n >> a >> b >> c;

        ll cycle = a + b + c; 
        ll full = (n - 1) / cycle; 
        ll total = full * cycle;  
        ll re = n - total;        

        if (re <= a) {
            cout << full * 3 + 1 << endl;
        } else if (re <= a + b) {
            cout << full * 3 + 2 << endl;
        } else {
            cout << full * 3 + 3 << endl;
        }
    }
}

int main() {
    OLD_MAXTAN
    solve();
    return 0;
}
