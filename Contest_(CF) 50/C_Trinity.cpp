#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    
    // Sort the array to easily access min and max values
    sort(v.begin(), v.end());
    
    // Count occurrences of the minimum and maximum values
    int min_val = v[0];
    int max_val = v[n-1];
    int count_min = count(v.begin(), v.end(), min_val);
    int count_max = count(v.begin(), v.end(), max_val);
    
    // If all elements are the same, no operation is needed
    if (min_val == max_val) {
        cout << 0 << endl;
        return;
    }
    
    // Calculate the minimum number of changes required to make the array valid
    int operations = n - max(count_min, count_max);
    
    cout << operations << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
