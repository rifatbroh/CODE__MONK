/*
    MD Rifat 
    
    country Bangladesh
*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<ll> v(n);
        for (int i=0; i<n; i++) cin >> v[i];

        ll ans = 0, cnt = 0;
        for (ll i=0; i<n; i++){
            ans += abs(v[i]);
            v.push_back(i);
        }
        for (ll i=0; i<n; i++){
            if (v[i] < 0){
                while(v[i] <= 0){
                    i++;
                }
                cnt++;
            }
        }
        cout << ans << " " << cnt << endl;
    }
    return 0;
}