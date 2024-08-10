/*
    MD Rifat 
    
    country Bangladesh
*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<ll> a(n), b(m), prefixSum(n + 1, 0);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        prefixSum[i + 1] = prefixSum[i] + a[i];
    }

    for (int i = 0; i < m; i++) cin >> b[i];
    
    int dorm = 1;
    for (int i = 0; i < m; i++) {
        while (b[i] > prefixSum[dorm]) {
            dorm++;
        }
        cout << dorm << " " << b[i] - prefixSum[dorm - 1] << endl;
    }

    return 0;
}
