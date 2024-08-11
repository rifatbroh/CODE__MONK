/*
    MD Rifat 
    Institute: BAIUST
    Country: Bangladesh
*/

#include <iostream>
using namespace std;

int main() {
    int t; 
    cin >> t;
    
    while (t--) {
        int x, y, k; 
        cin >> x >> y >> k;
        
        for (int i = 0; i < k - k % 2; i++) {
            if (i & 1) {
                cout << x - (i / 2 + 1) << " " << y << "\n";
            } else {
                cout << x + (i / 2 + 1) << " " << y << "\n";
            }
        }
        
        if (k & 1) {
            cout << x << " " << y << "\n";
        }
    }
    
    return 0;
}
