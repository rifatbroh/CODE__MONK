/*
    MD Rifat 
    
    country Bangladesh
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, k;
        cin >> a >> k;
        int n = a * k;
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];

        sort(v.begin(), v.end());
        int ans = 0;
        int x = n;
        int y = a / 2;

        for (int i = x - 1 - y, j = 0; i >= 0 && j < k; j++, i -= y + 1) {
            ans += v[i];
        }
        cout << ans << endl;
    }
    return 0;
}