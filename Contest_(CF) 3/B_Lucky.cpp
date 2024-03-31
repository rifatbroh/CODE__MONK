#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        
        int sum_first = (s[0] ) + (s[1]) + (s[2] );
        int sum_last = (s[3]) + (s[4] ) + (s[5] );
        
        if (sum_first == sum_last)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
