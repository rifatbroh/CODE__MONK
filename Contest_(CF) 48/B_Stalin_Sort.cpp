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
const ll INF = 1e9 + 7;
const ld EPS = 1e-9;
int v[MAX_N + 1];

void solve()
{
    /* _THE^MAXTAN_*/
    int n;
    cin >> n;
    //vi v(n);
    for (int i=1; i<=n; i++) cin >> v[i];

    // int cnt = 0, mx = v[0];
    // for (int i=1; i<n; i++){
    //     if (v[i] <= mx){
    //         mx = v[i];
    //     }
    //     else{
    //         cnt++;
    //     }
    // }
    // cout << cnt ;

    int mn = INF;
    for (int i=1; i<=n; i++){
        int cnt = 0;
        for (int j=i+1; j<=n; j++){
            cnt += (v[j] > v[i]);
        }
        mn = min(mn, cnt + (i-1));
    }
    cout << mn ;
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