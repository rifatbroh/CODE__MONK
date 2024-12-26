/*
    MD Rifat 
    
    country Bangladesh
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<ll> v(n);
        for (ll i=0; i<n; i++) cin >> v[i];

        ll cnt = 0;
        map<int, int> mp;
        for (int i=0; i<n; i++) mp[v[i]]++;

        for (auto x : mp){
            cnt += x.second/2;
        }
        cout << cnt << endl;
    }
    return 0;
}