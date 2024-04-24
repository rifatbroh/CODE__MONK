#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
            ll n, a, b;
        cin >> n >> a >> b;
        vector<ll> v(n);
        ll cost = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];

            if (v[i] * a <= b)
                cost += a * v[i];
            else
                cost += b;
    }
    cout << cost << endl;
    }

    return 0;
}
