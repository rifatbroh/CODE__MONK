#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i=1; i<=n; i++)
        {
            cin >> a[i];
        }
        if (a[1]< a[2] && a[2] > a[3] && a[2] > a[3] && a[3] < a[4] && a[4] > a[5])
        {
            cout << a << " ";
        }
        else
        {
            cout << "-1" ;
        }

    }
    return 0;
}