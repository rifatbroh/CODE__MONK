/*
    MD Rifat 
    
    country Bangladesh
*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;

    while(t--) {
        ll n;
        cin >> n;

        if (n%2 != 0) {
            ll one = (n/2) + 1;
            ll two = abs(n-one);

            ll sum1 = one;
            ll sum2 = two*2;
            cout << sum1 - sum2 << endl;
        }
        else {
            ll cnt = n/2;
        
            ll one = cnt*1;
            ll two = cnt*2;
            cout << one - two << endl;
        }
    }
    return 0;
}