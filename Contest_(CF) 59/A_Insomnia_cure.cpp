/*
    MD Rifat 
    
    country Bangladesh
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;

    int cnt = 0;
    for (int i=1; i<=d; i++){
        if ((i%k) && (i%l) && (i%m) && (i%n)){
            cnt++;
        }
    }
    cout << d - cnt << endl;
    return 0;
}