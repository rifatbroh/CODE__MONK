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

    vector<int> a, b;
    int odd = 0, even= 0;
    for (int i=0; i<n; i++) {
        if (v[i]%2 == 0) {
            even++;
            a.push_back(i+1);
        }
        else {
            odd++;
            b.push_back(i+1);
        }
    }
    
    if (odd == 1)
        cout << b[0] << endl;
    else
        cout << a[0] << endl;
    return 0;
}