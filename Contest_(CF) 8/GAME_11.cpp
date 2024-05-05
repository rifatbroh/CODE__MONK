
#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 1e9 + 5;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        vector<ll> bets(max(n, m), 0);
        vector<ll> blow(max(n, m), 0);
        for (ll i = 0; i < n; i++) cin >> bets[i];
        for (ll i = 0; i < m; i++) cin >> blow[i];

        sort(bets.begin(), bets.end(), greater<ll>());
        sort(blow.begin(), blow.end(), greater<ll>());

        if (n < 4 || m < 4 || n + m < 11)
            cout << -1 << endl;
        else
        {
            ll ans = 0;
            ll count = 8;

            for (ll i = 0; i < 4; i++)
            {
                ans += bets[i];
                ans += blow[i];
            }

            ll l = 4, r = 4;
            while (l <= n && r <= m)
            {
                if (count == 11)
                    break;
                if (bets[l] >= blow[r])
                {
                    ans += bets[l];
                    l++;
                    count++;
                }
                else if (bets[l] < blow[r])
                {
                    ans += blow[r];
                    r++;
                    count++;
                }
            }
            cout << ans << endl;
        }
    }
    return 0;
}
