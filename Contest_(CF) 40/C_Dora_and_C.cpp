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

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

void solve()
{
    ll n, a, b;
    cin >> n >> a >> b;
    vector<ll> v(n+1);
    for (ll i = 1; i <= n; i++) cin >> v[i];

    ll x = gcd(a, b);
    for (int i = 1; i <= n; i++){
        v[i] = v[i] % x;
    }

    sort(vec(v));
    ll mn = v[n] - v[1];

    for (int i = 0; i < n; i++){
        mn = min(mn, (v[i] + x - v[i + 1]));
    }

    cout << mn;
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
    }
    return 0;
}