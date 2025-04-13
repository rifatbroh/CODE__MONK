/*
    MD Rifat 
    
    country Bangladesh
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--) {
        int n, m, l, r;
        cin >> n >> m >> l >> r;

        int ans = n-m;
        int solve = r - ans;

        cout << l << " " << solve << endl;
    }
    return 0;
}