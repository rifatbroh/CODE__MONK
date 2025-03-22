/*
    MD Rifat 
    
    country Bangladesh
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int cnt = 0;
    set<pair<int, int>> s;

    while (m--) {
        int a, b;
        cin >> a >> b;

        if (a > b) swap(a, b);

        if (a == b) cnt++;
        else {
            // value duplicate kina ?
            if (s.count({a, b}) > 0)
                cnt++;
            else
                s.insert({a, b});
        }
    }
    cout << cnt << endl;
    return 0;
}
