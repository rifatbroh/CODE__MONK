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

ll gcd(ll l, ll r)
{
    if (r == 0)
        return l;
    return gcd(r, l % r);
}

void solve()
{
    int l, r;
    cin >> l >> r;
    ll result = 0;
    for (int i = l; i <= r - 2; i++)
    {
        ll a = i, b = i + 1, c = i + 2;

        if (gcd(a, b) == 1 && gcd(b, c) == 1 && gcd(c, a) == 1)
        {
            result++;
            i = i + 2;
        }
    }
    cout << result;
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