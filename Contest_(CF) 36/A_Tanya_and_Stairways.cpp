/*
    MD Rifat 
    
    country Bangladesh
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++) cin >> v[i];

    vector<int> steps;

    int cnt = 1;
    for (int i = 1; i <= n; i++) {
        if (i == n || v[i] == 1) {
            steps.push_back(cnt);
            cnt = 1;
        } else 
            cnt++;
    }

    cout << steps.size() << endl;
    for (auto step : steps) {
        cout << step << " ";
    }

    return 0;
}
