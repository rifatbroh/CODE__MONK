
/*
    MD Rifat 
    
    country Bangladesh
*/

#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n, total = 0, max = 0;
    cin >> n;
    int a[n][2];
    for(int i=0; i<n; i++){
        for(int j=0; j<2; j++){
            cin >> a[i][j];
            if(j == 0)
                total -= a[i][j];
            else
                total += a[i][j];
        }
        if(total > max)
            max = total;
    }
    cout << max << endl;
    return 0;
}