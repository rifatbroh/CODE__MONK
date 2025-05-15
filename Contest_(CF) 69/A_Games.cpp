#pragma GCC optimize ("Ofast")
#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n, i, j, ans = 0;
    cin >> n;
    int a[n][2], b[101] = {0}, c[101] = {0};
    for(i=0; i<n; i++)
        for(j=0; j<2; j++)
        {
            cin >> a[i][j];
            if(j == 0)
                b[a[i][j]]++;
            else
                c[a[i][j]]++;
        }

    for(i=1; i<101; i++)
    {
        if(b[i] && c[i])
            ans += (b[i] * c[i]);
    }
    cout << ans << endl;

    return 0;
}