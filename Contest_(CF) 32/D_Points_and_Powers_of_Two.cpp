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

    for (int i=0; i<n; i++){
        int sub= abs(v[i] - v[i-1]);
        if (sub == pow(2, i)){
            cout << v.size()<< endl;
            cout << v[i] << endl;
        }
    }
    return 0;
}