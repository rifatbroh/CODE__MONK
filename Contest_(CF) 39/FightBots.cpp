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

bool flag(int x, int y, int ax, int ay, int n)
{
    int dist = abs(ax - x) + abs(ay - y);
    return dist <= n && (n - dist) % 2 == 0;
}

void solve()
{
    int n, x, y;
    cin >> n >> x >> y;

    string s;
    cin >> s;

    vector<pair<int, int>> v(n + 1);
    int a = 0, b = 0;

    v[0] = {a, b};

    for (int i = 1; i <= n; ++i)
    {
        char ch = s[i - 1];
        if (ch == 'L')
            a--;
        else if (ch == 'R')
            a++;
        else if (ch == 'U')
            b++;
        else if (ch == 'D')
            b--;

        v[i] = {a, b};

        if (flag(x, y, a, b, i))
        {
            cout << "Yes";
            return;
        }
    }

    cout << "No";
}

int main()
{
    OLD_MAXTAN
    int t;
    cin >> t;
    while(t--)
    {
        solve();
        cout << "\n";
    }
    return 0;
}
