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

vector<bool> prime(105, true);
void solve()
{
    /* _THE^MAXTAN_*/
    int n;
    cin >> n;
    string s;
    cin >> s;
    vi v;
    
    for (int i=0; i<n; i++){
        v.push_back(s[i] - '0');
    }
    for (auto x : v){
        if (x%2 == 0 && x != 2 || prime[x] == false){
            cout << 1 << endl;
            cout << x;
            return;
        }
    }

    for (int i=0; i<v.size(); i++){
        for (int j=i+1; j<v.size(); j++){
            if (!prime[(v[i] * 10) + v[j]]){
                cout << 2 << endl;
                cout << v[i] << v[j];
                return;
            }
        }
    }
}
int main()
{
    OLD_MAXTAN
    prime[1] = false;
    for (int i=2; i<105; i++){
        prime[i] = true;
        for (int j=2; j*j<=i; j++){
            if (i%j == 0){
                prime[i] = false;
            }
        }
    }

    int t;
    cin>>t;
    while(t--)
    {
        solve();
        cout<<"\n";
    }
    return 0;
}