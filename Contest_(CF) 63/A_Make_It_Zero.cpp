// for verification copy from others


// Author: Tahsin Arafat
// CodeForces: @tahsinarafat
// CodeChef: @tahsinarafat
#pragma GCC optimize("O3") //,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007
#define sz(x) (int)(x).size()
#define rd ill()
ll ill();

void solve()
{
    int n = rd;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    if (n % 2 == 0)
    {
        cout << 2 << "\n";
        cout << 1 << " " << n << "\n";
        cout << 1 << " " << n << "\n";
    }
    else
    {
        cout << "4\n";
        cout << 1 << " " << n << "\n";
        cout << 1 << " " << 2 << "\n";
        cout << 2 << " " << n << "\n";
        cout << 2 << " " << n << "\n";
    }
    //cout << "\n";
    /*int x = 0;
    for (auto i : arr)
        x ^= i;
    for (auto &i : arr)
        i = x;
    x = 0;
    for (auto i : arr)
        x ^= i;
    x ^= 9;
    cout << x << "\n";*/
}

int main()
{
    // freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
    int t = 1;
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    cin >> t;
    for (int i = 1; i <= t; i++)
        solve();
    return 0;
}
ll ill()
{
    ll x;
    cin >> x;
    return x;
}
