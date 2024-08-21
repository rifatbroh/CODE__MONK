#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        
        int sum = 0;
        
        while (a != b) {
            if (a > b)
            {
                int x = (a + 1) / 2;
                a -= x;
                sum += x;
            } else
            {
                int y = (b + 1) / 2;
                b -= y;
                sum += y;
            }
        }
        
        cout << sum << endl;
    }
    return 0;
}
