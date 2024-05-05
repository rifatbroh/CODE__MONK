#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        bool got = false;
        int ans = -2;

        for (int i = 0; i < n; i++)
        {
            int p;
            cin >> p;

            if (p >= k)
            {
                int rem = p % k;
                if (ans == -2)
                {
                    ans = rem;
                    got = true;
                }
                else
                {
                    if (rem < ans)
                    {
                        ans = rem;
                        got = true;
                    }
                }
            }
        }

        if (got)
            cout << ans << endl;
        else
            cout << -1 << endl;

        //t--;
    }

    return 0;
}
