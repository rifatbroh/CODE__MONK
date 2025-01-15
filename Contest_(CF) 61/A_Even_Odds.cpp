/*
    MD Rifat 
    
    country Bangladesh
*/

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll n, k;
    cin >> n >> k;

    vector<ll> a, b, c;
    for (ll i = 1; i <= n; i++) {
        if (i % 2 == 0)
            a.push_back(i);
        else
            b.push_back(i);
    }
    c.insert(c.end(), b.begin(), b.end());
    c.insert(c.end(), a.begin(), a.end());

    cout << c[k - 1] << endl;

    return 0;
}
