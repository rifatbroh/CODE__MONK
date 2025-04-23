/*
    MD Rifat 
    
    country Bangladesh
*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin >> n;

    // ll ans = 0;
    // for (ll i=1; i<=n; i++) {
    //     if (i%2 == 1)
    //         ans -= i;
    //     else
    //         ans += i;
    // }
    // cout << ans << endl;

    if (n%2 == 0) 
        cout << n/2 << endl;
    else
        cout << (n/2)-n << endl;
    return 0;
}