/*
    MD Rifat 
    
    country Bangladesh
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    double max_mean = 0.0;
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum += v[j];
            int length = j - i + 1;
            if (length >= k) {
                double mean = (double)sum / length;
                max_mean = max(max_mean, mean);
            }
        }
    }
    cout << fixed << setprecision(15) << max_mean << endl;
    return 0;
}
