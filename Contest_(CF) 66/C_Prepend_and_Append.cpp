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
#define vin(a) for (auto &it : a) cin >> it;
#define vout(a) for (auto &it : a) cout << it << " ";
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
    string s;
    cin >> s;

    // int one= 0, zero = 0;
    // for (int i=0; i<n; i++) {
    //     if (s[i] == '0')
    //         zero++;
    //     else
    //         one++;
    // }
    // cout << min(one,zero) ;

    int l=0, r=n-1;
    while(l<r && s[l] != s[r]) {
        // if (s[l] != s[r]) {
        //     l++;
        //     r--;
        // }
        l++;
        r--;
    }
    cout << (r-l+1);
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