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
    string s1, s2;
    cin >> s1 >> s2;

    int cnt0 = count(s1.begin(), s1.end(), '0');
    int cnt1 = n - cnt0;
    for (size_t i = 0; i < n - 1; i++)
    {
        if (cnt0 == 0 || cnt1 == 0)
        {
            cout << "NO" ;
            return;
        }
        if (s2[i] == '1')
            cnt0--;
        else
            cnt1--;
    }
    cout << "YES" ;
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