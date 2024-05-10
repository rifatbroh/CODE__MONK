#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if ((a < c && c < b && b < d) || (c < a && a < d && d < b))
    {
        cout << "YES" << endl;
        return;
    }

    if (a > b)
        swap(a, b);
    if (c > d)
        swap(c, d);

    if ((a < c && c < b && b < d) || (c < a && a < d && d < b))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
       solve();
    }
    return 0;
}