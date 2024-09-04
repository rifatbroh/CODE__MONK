#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X, Y;
        cin >> X >> Y;

        int op = 0;
        if (X < 2 * Y && Y < 2 * X) {
            if (X >= Y) {
                op = (2 * Y - X + 1) / 2;
            } else {
                op = (2 * X - Y + 1) / 2;
            }
        }
        
        cout << op << endl;
    }

    return 0;
}
