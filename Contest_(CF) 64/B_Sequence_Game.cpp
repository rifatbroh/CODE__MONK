#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n), ans;

    for (int i = 0; i < n; i++) 
        cin >> arr[i];

    ans.push_back(arr[0]);

    for (int i = 1; i < n; i++) {
        if (arr[i] < ans.back()) {
            ans.push_back(arr[i]);
        }
        ans.push_back(arr[i]);
    }

    cout << ans.size() << "\n";
    for (auto it : ans)
        cout << it << " ";
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
