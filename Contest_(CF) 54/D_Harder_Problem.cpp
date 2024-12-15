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
    int n;
    cin >> n;
    set<int> s;
    vector<int> fre(n + 1, 0);
    vector<int> v;
    for (int i = 0; i < n; i++){
        int val;
        cin >> val;

        if (s.count(val) == 0){
            v.push_back(val);
        }
        s.insert(val);
    }

    for (int i = 1; i <= n; i++){
        if (s.count(i) == 0){
            v.push_back(i);
        }
    }

    for (int i=0; i<n; i++){
        cout << v[i] << " ";
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