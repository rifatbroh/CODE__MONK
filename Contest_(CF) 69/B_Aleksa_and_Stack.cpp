#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--) {
        int x = 1e8;
        int n; cin >> n;
        for (int i = 0; i < n; i++){
            cout << x + i << " \n"[i == n - 1];
        }
    }
    return 0;
}
