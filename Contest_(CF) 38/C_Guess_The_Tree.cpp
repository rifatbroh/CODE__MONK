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

const int N = 1004;
bool chack[N];
int par[N];

int ask(int u, int v)
{
    cout << "? " << u << " " << v << endl;
    cout.flush();
    int ans;
    cin >> ans;
    return ans;
}

void path(int u, int v)
{
    int x = ask(u, v);
    if (x == u || x == v)
    {
        par[v] = u;
        chack[v] = true;
        return;
    }

    if (!chack[x])
    {
        path(u, x);
    }
    path(x, v);
}

void solve()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        chack[i] = false;
    }

    chack[1] = true;
    for (int i = 2; i <= n; i++)
    {
        if (!chack[i])
        {
            path(1, i);
        }
    }

    cout << "! ";
    for (int i = 2; i <= n; i++)
    {
        cout << i << " " << par[i] << " ";
    }
}
int main()
{
    OLD_MAXTAN
    int t;
    cin>>t;
    while(t--)
    {
        solve();
        cout<<"\n";
        cout.flush();
    }
    return 0;
}