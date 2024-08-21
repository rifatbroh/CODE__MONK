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
    /*Lets play*/
    int n;
    ll k;
    cin >> n >> k;

    priority_queue<ll, vector<ll>, greater<ll>> pq;
    for (int i=0; i<n; i++){
        ll a;
        cin >> a;
        pq.push(a);
    }
    // calculate number of operation
    while(k--)
    {
        ll s = pq.top();
        pq.pop();
        s *= 2;
        pq.push(s);
    }
    ll ans = 0;
    // this is valid when pq is not null
    while(!pq.empty()){
        ans = (ans + pq.top()) % MOD;
        pq.pop();
    }
    cout << ans ;
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