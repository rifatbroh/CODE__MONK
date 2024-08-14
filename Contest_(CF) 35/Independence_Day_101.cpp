#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        
        int mx = max({a, b, c}); 
        
        int ans = a + b + c;
        int res = ans - mx + 1;
        
        if (mx <= res)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
