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
    int n, b;
    cin >> n >> b;

    deque<int> dq;

    while (b--)
    {
        int x;
        string operation;
        cin >> operation;

        if (operation == "pushLeft")
        {
            cin >> x;
            if (dq.size() == n)
                cout << "The queue is full" << endl;
            else{
                dq.push_front(x);
                cout << "Pushed in left: " << x << endl;
            }
        }
        else if (operation == "pushRight")
        {
            cin >> x;
            if (dq.size() == n)
                cout << "The queue is full" << endl;
            else{
                dq.push_back(x);
                cout << "Pushed in right: " << x << endl;
            }
        }
        else if (operation == "popLeft")
        {
            if (dq.empty())
                cout << "The queue is empty" << endl;
            else{
                int popped_value = dq.front();
                dq.pop_front();
                cout << "Popped from left: " << popped_value << endl;
            }
        }
        else if (operation == "popRight")
        {
            if (dq.empty())
                cout << "The queue is empty" << endl;
            else{
                int popped_value = dq.back();
                dq.pop_back();
                cout << "Popped from right: " << popped_value << endl;
            }
        }
    }
}
int main()
{
    OLD_MAXTAN
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cout << "Case " << i << ":" << endl;
        solve();
    }
    return 0;
}