/*
    MD Rifat 
    
    country Bangladesh
*/

#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int k, l, m, n, d, i, c=0;
    cin >> k >> l >> m >> n >> d;
    for(i=1; i<=d; i++)
        if((i%k) && (i%l) && (i%m) && (i%n))
            c++;
    
    cout << d - c << endl;

    return 0;
}