/*
    MD Rifat 
    
    country Bangladesh
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k, n, w;
    cin >> k >> n >> w;

    int ans = 0, borrow = 0;
    for (int i=1; i<=w; i++) {
        ans += (k*i);
    }
    if (ans > n)
        cout << abs(n-ans) << endl;
    else
        cout << "0" << endl;
    return 0;
}