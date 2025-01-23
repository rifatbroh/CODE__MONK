/*
    MD Rifat 
    
    country Bangladesh
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> v(n);
    for (int i=0; i<n; i++) cin >> v[i];

    bool flag = false;
    for (int i=0; i<n; i++) {
        if (v[i] >= m ) {
            flag = true;
            break;
        }
    }
    if (flag)
        cout << "YES" << endl;
    else 
        cout << "NO" << endl;
    return 0;
}