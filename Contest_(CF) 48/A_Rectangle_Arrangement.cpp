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
int w[MAX_N + 1], h[MAX_N + 1];

void solve()
{
    /* _THE^MAXTAN_*/
    int n;
    cin >> n;
    for (int i=1; i<=n; i++){
        cin >> w[i] >> h[i];
    }

    int mx = *max_element(w+1, w+n+1);
    int mx2 = *max_element(h+1, h+n+1);

    int perimeter = (mx + mx2) * 2;
    cout << perimeter;
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