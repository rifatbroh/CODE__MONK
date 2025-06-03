#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n, i, c = 0, d;
    cin >> n;
    int a[n];
    for(i=0; i<n; i++)
        cin >> a[i];

    i = 0;
    while(i < n)
    {
        while(a[i] == -1)
        {
            c++;
            i++;
        }
        
        d = a[i++];
        while(d != 0 && i < n)
            d += a[i++];
    }
    cout << c << endl;

    return 0;
}