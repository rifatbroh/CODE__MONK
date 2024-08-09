/*
    MD Rifat 
    
    country Bangladesh
*/

#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    ll n, k;
    cin >> n >> k;

    while(k--)
    {
        if (n%10 != 0)
            n -= 1;
        else
            n/=10;
    }
    cout << n << endl;
    return 0;
}