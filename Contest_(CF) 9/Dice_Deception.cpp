#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> ar(n);
        for (int i = 0; i < n; i++)
            cin >> ar[i];   

        sort(ar.begin(), ar.end());
        int res = 0;

        for (int i = 0; i < k; i++)
        {
            ar[i] = max(7 - ar[i], ar[i]);
        }
        for (int i = 0; i < n; i++)
        {
            res += ar[i];
        }
        cout << res << endl;
    }
    return 0;
}