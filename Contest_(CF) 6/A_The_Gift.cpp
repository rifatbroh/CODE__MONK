#include<bits/stdc++.h>
using namespace std;

int main() {
    int x, n, m;
    cin >> x >> n >> m;

    if (x >= n || (x + m) >= n)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
