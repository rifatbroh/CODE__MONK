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
#define yes cout << "Yes"
#define no cout << "No"
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
    //sort(v.begin(), v.end());

    // bool ok = false;
    // int sum = v[0] + v[1];
    // for (int i=0; i<n-1; i++) {
    //     if (v[i] + v[i-1] == sum) {
    //         ok = true;
    //         break;
    //     }
    // }
    // if (ok)
    //     yes;
    // else
    //     no;

    mp x;
    for(int i=0; i<n; i++) {
        x[v[i]]++;
    }
    for (auto [a, b] : x) {
        if (x.size()==1 || (x.size() == 2 && b == (n/2))) {
            cout << "Yes" ;
            return ;
        }
    }
    cout << "No";
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