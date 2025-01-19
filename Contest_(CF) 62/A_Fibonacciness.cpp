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
    int a1, a2, a4, a5;
    cin >> a1 >> a2 >> a4 >> a5;
    vi v;
    v.push_back(a1+a2);
    v.push_back(a4 - a2);
    v.push_back(a5-a4);

    int mx = 0;
    for (int a3 : v) {
        int cnt = 0;
        if (a3 == a1+a2)
            cnt++;
        if (a4 == a2+a3)
            cnt++;
        if (a5 == a3+a4)
            cnt++;

        mx = max(mx, cnt);
    }
    cout << mx ;
    
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