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
    vector<pair<int, int>> ranges(n);
    vector<int> result(n, 0);
    map<int, int> count;
    vector<int> v;

    for (int i = 0; i < n; ++i){
        int l, r;
        cin >> l >> r;
        ranges[i] = {l, r};
        if (l == r){
            if (count[l]++ == 0){
                v.push_back(l);
            }
        }
    }

    sort(v.begin(), v.end());
    for (int i = 0; i < n; ++i){
        int l = ranges[i].first, r = ranges[i].second;

        if (l == r){
            result[i] = (count[l] == 1);
        }
        else{
            int in = upper_bound(v.begin(), v.end(), r) -
                     lower_bound(v.begin(), v.end(), l);

            if ((r - l + 1) > in){
                result[i] = 1;
            }
        }
    }

    for (int x : result)
        cout << x;
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