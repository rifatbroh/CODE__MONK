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
    /* _THE^MAXTAN_ */
    string s;
    cin >> s;

    int ab = 0, ba = 0;

    for (int i = 0; i < s.size() - 1; i++) {
        if (s[i] == 'a' && s[i + 1] == 'b') ab++;
        if (s[i] == 'b' && s[i + 1] == 'a') ba++;
    }

    if (ab == ba) {
        cout << s ;
        return;
    }

    if (ab > ba) {
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'a') {
                s[i] = 'b';
                break;
            }
        }
    } else {
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'b') {
                s[i] = 'a';
                break;
            }
        }
    }

    cout << s ;
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