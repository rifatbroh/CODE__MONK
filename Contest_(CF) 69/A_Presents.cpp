/*
    MD Rifat 
    
    country Bangladesh
*/

#include <iostream>
using namespace std;

int main ()
{
    int n, i;
    cin >> n;
    int a[n], b[n] = {0};

    for(i=0; i<n; i++)
    {
        cin >> a[i];
        b[a[i]-1] = i + 1;
    }

    for(i=0; i<n; i++)
    {
        if(i == n - 1)
            cout << b[i] << "\n";
        else
            cout << b[i] << " ";
    }

    return 0;
}