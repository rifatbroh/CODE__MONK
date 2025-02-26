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
    int n, k, x;
    cin >> n >> k >> x;
    
    if (x != 1){
        cout << "YES\n";
        cout << n << "\n";
        while (n--) cout << 1 << " ";
        cout << "\n";
        return;
    }
    if (n == 1 || k == 1){
        cout << "NO\n";
        return;
    }
    
    if (k == 2){
        if (n % 2 == 0){
            cout << "YES\n";
            cout << n / 2 << "\n";
            while (n--){
                cout << 2 << " ";
                n--;
            }
            cout << "\n";
            return;
        } else {
            cout << "No\n";
            return;
        }
    }
    
    if (n % 2 == 0){
        cout << "YES\n";
            cout << n / 2 << "\n";
            while (n--){
                cout << 2 << " ";
                n--;
            }
            cout << "\n";
            return;
    } else {
        cout << "YES\n";
        cout << n/2 << "\n";
        cout << 3 << " ";
        n -= 3;
        while (n--){
            cout << 2 << " ";
            n--;
        }
        cout << "\n";
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
        //cout<<"\n";
    }
    return 0;
}