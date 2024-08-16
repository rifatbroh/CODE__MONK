/*
    MD Rifat 
    
    country Bangladesh
*/

#include <bits/stdc++.h>
using namespace std;

bool Power(int x) {
    return (x & (x - 1)) == 0;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    //sort(v.begin(), v.end());
    int cnt = 0;

    for (int i = 0; i < n; i++) {
        bool found = false;
        for (int j = 0; j < n; j++) {
            if (i != j && Power(v[i] + v[j])) {
                found = true;
                break;
            }
        }
        if (!found) cnt++;
    }

    cout << cnt << endl;
    return 0;
}
