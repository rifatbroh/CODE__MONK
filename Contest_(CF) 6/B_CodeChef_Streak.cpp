#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], b[n];
        int om = 0, addy = 0;
        int max_om_streak = 0, max_addy_streak = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] != 0) {
                om++;
                max_om_streak = max(max_om_streak, om);
            }
            else {
                om = 0;
            }
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
            if (b[i] != 0)
            {
                addy++;
                max_addy_streak = max(max_addy_streak, addy);
            } 
            else {
                addy = 0;
            }
        }

        if (max_om_streak > max_addy_streak)
            cout << "Om" << endl;
        else if (max_om_streak < max_addy_streak)
            cout << "Addy" << endl;
        else
            cout << "Draw" << endl;
    }
    return 0;
}
