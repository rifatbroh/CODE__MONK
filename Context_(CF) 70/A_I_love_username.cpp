/*
    MD Rifat 
    
    country Bangladesh
*/

#include <bits/stdc++.h>
using namespace std;
 
int main ()
{
    int n, i, mx, mn, c = 0;
    cin >> n;
    int a[n];

    for(i=0; i<n; i++)
        cin >> a[i];
    
    mx = a[0];
    mn = a[0];
    for(i=1; i<n; i++)
        if(a[i] > mx)
        {
            c++;
            mx = a[i];
        }
        else if(a[i] < mn)
        {
            c++;
            mn = a[i];
        }
    cout << c << endl;
 
    return 0;
}