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

    float sum = 0.0;
    for (int i=0; i<n; i++) {
        sum += v[i];
    }
    cout << ceil(sum/4.0) << endl;
    return 0;
}