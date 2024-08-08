#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];

        int odd = 1, even = 1;
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                if (v[i] % 2 != v[0] % 2) {
                    odd = 0;
                }
            }
            else {
                if (v[i] % 2 != v[1] % 2) {
                    even = 0;
                }
            }
        }

        if (odd && even)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
