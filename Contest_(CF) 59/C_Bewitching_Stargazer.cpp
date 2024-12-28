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

pair<ll, int> ans(ll l, ll r, int threshold)
{

    if (r - l + 1 < threshold)
        return {0, 0};

    if (r - l + 1 == 1)
        return {l, 1};

    ll mid = l + (r - l) / 2;

    if ((r - l + 1) % 2){

        pair<ll, int> p = ans(l, mid - 1, threshold);

        ll x = mid + 2 * p.first + mid * p.second;
        int y = 2 * p.second + 1;

        return {x, y};
    }
    else{

        pair<ll, int> q = ans(l, mid, threshold);
        ll a = 2 * q.first + mid * q.second;
        int b = 2 * q.second;

        return {a, b};
    }
}
void solve()
{
    long long n, k;
    cin >> n >> k;

    pair<ll, int> result = ans(1, n, k);
    cout << result.first ;
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