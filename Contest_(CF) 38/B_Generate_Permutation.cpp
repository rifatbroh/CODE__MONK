/*
    MD Rifat Hossain

    Institute:- BAIUST
    Country:- BANGLADESH
*/

#include<bits/stdc++.h>
using namespace std;

#define OLD_MAXTAN                 \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long
#define ld long double
#define yes "YES"
#define no "no"
#define PI 3.1415926535897932384626433832795

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

void solve()
{
    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << -1 << endl;
    }
    else
    {
        vector<int> v(n);
        int l = 0, r = n - 1;
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 1)
                v[l++] = i;
            else
                v[r--] = i;
        }
        for (int i = 0; i < n; i++)
        {
            cout << v[i] << " " << endl;
        }
    }
}

int main() {
    OLD_MAXTAN
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
