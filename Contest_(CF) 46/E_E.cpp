/*
    MD Rifat 
    
    country Bangladesh
*/

#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    
    for (int i = 0; i < n; i++) cin >> v[i];

    ll sum = 0;
    ll suffix_sum = 0;

    for (int i=0; i<=n-1; i++) {
        sum = (sum + v[i] * suffix_sum) % MOD;
        suffix_sum = (suffix_sum + v[i]) % MOD; 
    }

    cout << sum << endl;

    return 0;
}
