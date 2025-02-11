/*
    MD Rifat 
    
    country Bangladesh
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i=0; i<n; i++) cin >> v[i];

    int ans = 1E9;
    for (int i=0; i<n; i++) {
        ans = min(ans, abs(v[i]));
    }
    cout << ans << endl;
    return 0;
}