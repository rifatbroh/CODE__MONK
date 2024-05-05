#include<bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while(t--) {
        int a, b, c, d, e;
        cin >> a >> b >> c >> d >> e;
        int cnt = 0;
        if (a == 1) cnt++;
        if (b == 1) cnt++;
        if (c == 1) cnt++;
        if (d == 1) cnt++;
        if (e == 1) cnt++;
        
        if (cnt >= 4) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
