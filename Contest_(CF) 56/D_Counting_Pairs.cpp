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


void solve()
{
    /* _THE^MAXTAN_*/
    int n;
    ll x, y;
    cin >> n >> x >> y;

    vector<ll> v(n);
    ll total = 0;
    for (auto &x : v)
        cin >> x, total += x;

    ll L = total - y;
    ll R = total - x;

    sort(v.begin(), v.end());

    ll cnt = 0;
    for (int i = 0; i < n - 1; i++)
    {
        ll low = L - v[i];
        ll high = R - v[i];

        int li = lower_bound(v.begin() + i + 1, v.end(), low) - v.begin();
        int ri = upper_bound(v.begin() + i + 1, v.end(), high) - v.begin();

        cnt += ri - li;
    }

    cout << cnt ;
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