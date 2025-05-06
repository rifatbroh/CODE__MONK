#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n, p, q, i;
    cin >> n;
    int t[n+1] = {0};

    cin >> p;
    int a[p];
    for(i=0; i<p; i++)
    {
        cin >> a[i];
        t[a[i]]++;
    }

    cin >> q;
    int b[q];
    for(i=0; i<q; i++)
    {
        cin >> b[i];
        t[b[i]]++;
    }

    for(i=1; i<=n; i++)
        if(t[i] == 0)
        {
            cout << "Oh, my keyboard!\n";
            return 0;
        }
    cout << "I become the guy.\n";

    return 0;
}