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

ll factorial(ll n)
{
    ll result = 1;
    for (ll i = 2; i <= n; i++)
    {
        result = (result * i);
    }
    return result;
}

void solve()
{
    /* _THE^MAXTAN_*/
    ll n, d;
    cin >> n >> d;

    cout << 1 << " ";

    if (n >= 3 || d % 3 == 0)
        cout << 3 << " ";

    if (d == 5)
        cout << 5 << " ";
    if (n >= 3 || (n == 2 && d == 7))
        cout << 7 << " ";

    if (n >= 6)
        cout << 9 << " ";
    else
    {
        if ((factorial(n) * d) % 9 == 0)
        {
            cout << 9 << " ";
        }
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
    }
    return 0;
}