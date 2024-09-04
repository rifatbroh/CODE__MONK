/*
    MD Rifat 
    
    country Bangladesh
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        multiset<int> ms;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            ms.insert(x);
        }

        for (int i = 0; i < k; i++) {
            auto min_it = ms.begin();
            auto max_it = prev(ms.end());

            int mn = *min_it;
            int mx = *max_it;

            ms.erase(min_it);
            ms.erase(max_it);

            int final = mn + mx;
            ms.insert(final);
        }

        for (auto it = ms.begin(); it != ms.end(); ++it) {
            cout << *it << " ";
        }
        cout << endl;
    }
    return 0;
}
