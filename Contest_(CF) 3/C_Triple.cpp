#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        int max = 0, cnt = 0;
        for (int i=0; i<n; i++)
        {
            if (a[i] > max)
            {
                max = a[i];
                cnt++;
            }
        }
        if (cnt > max)
            cout << max << endl;
        else
            cout << "-1" << endl;
     }
    return 0;
}