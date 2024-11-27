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
    
    // ll cnt = 0;
    // for (ll i=1; i<=n; i++){
    //     if (i%2 == 0)
    //         cnt += i;
    //     else
    //         cnt -= i;
    // }
    // cout << cnt << endl;

    ll even = (n/2) * ((n/2)+1);
    ll odd = ((n+1) / 2) * ((n+1)/2);
    cout << even - odd << endl;
    return 0;
}