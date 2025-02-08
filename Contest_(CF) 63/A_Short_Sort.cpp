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
    string s;
    cin >> s;

    if (s == "abc") {
        yes;
        return;
    }
    
    bool ok = false;
    // for (int i=0; i<s.size()-1; i++) {
    //     swap(s[i], s[i+1]);
    //     if (s == "abc") {
    //         ok = true;
    //         break;
    //     }
    //     swap(s[i], s[i+1]);
    // }
    // if (ok) yes;
    // else no;

    for (int i=0; i<s.size(); i++) {
        for (int j=i+1; j<s.size(); j++) {
            swap(s[i], s[j]);
            if (s == "abc") {
                ok = true;
                break;
            }
            swap (s[i], s[j]);
        }
    }
    if (ok) yes;
    else no;
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