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
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> v1(m);
    vector<int> v2(k);

    for (auto &x : v1)
        cin >> x;
    for (auto &x : v2)
        cin >> x;

    if (k == n){
        cout << string(m, '1') ;
        return;
    }
    if (k == n - 1){
        int unknown = 0;
        vector<bool> v(n + 1, false);
        for (int q : v2)
            v[q] = true;

        for (int i = 1; i <= n; i++){
            if (!v[i]){
                unknown = i;
                break;
            }
        }

        string result(m, '0');
        for (int i = 0; i < m; i++){
            if (v1[i] == unknown)
                result[i] = '1';
        }
        cout << result ;
        return;
    }

    unordered_set<int> s(v2.begin(), v2.end());
    string result(m, '0');

    for (int i = 0; i < m; i++){
        bool flag = true;

        for (int q = 1; q <= n; q++){
            if (q == v1[i])
                continue;
            if (!s.count(q)){
                flag = false;
                break;
            }
        }

        if (flag)
            result[i] = '1';
    }

    cout << result ;
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