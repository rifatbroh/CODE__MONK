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
    for (int i=0; i<n; i++) cin >> v[i];

    double ans = 0.0;
    for (int i=0; i<n; i++) {
        ans += v[i];
    }
    cout << fixed << setprecision(12) <<  ans/n << endl;
    return 0;
}