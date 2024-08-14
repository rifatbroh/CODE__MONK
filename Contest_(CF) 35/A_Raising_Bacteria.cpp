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

    int ans = 0;
    while(n)
    {
        if (n & 1){
            ans++;
        }
        // right shit by one
        n >>= 1;
    }
    cout << ans << endl;
    return 0;
}