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
    cin >> n;
    vi v(n);
    for (int i=0; i<n; i++) cin >> v[i];

    int mn;
    // int i=0;
    // int l = 0, r = n-1;

    // while(l <= r){
    //     int bit = v[l] & v[r];
    //     v[l] = bit;
    //     l++;
    //     r--;
    //     i++;

    //     mx = *max_element(v.begin(), v.end());
    // }

    // vi ans ;
    // for (int i=1; i<=n; i++){
    //     int AND = v[i] & v[i-1];
    //     ans.pb(AND);
    // }
    
    for (int i=0; i<n; i++){
        for (int j=0; j<n-i-1; j++){
            v[j] &= v[j+1];
        }
    }
    mn = *min_element(v.begin(), v.end());
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