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
    int n, k;
    cin >> n >> k;
    
    mp freq;
    for (int i=0; i<n; i++){
        // include array input 
        int a;
        cin >> a;
        freq[a]++;
    }

    vi v;
    for (auto [x, y] : freq){
        v.push_back(y);
    }
    sort(v.begin(), v.end());

    int unique = v.size();
    for (int i=0; i< freq.size()-1; i++){
        if (k >= v[i]){
            k -= v[i];
            unique--;
        }
        else
            break;
    }
    cout << unique ;
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