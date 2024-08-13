#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        set<int> blank; 
        int flag = 1;

        for (int i = 0; i < n; i++) {
            int seat = a[i];
            if (i > 0) {
                if (blank.count(seat - 1) == 0 && blank.count(seat + 1) == 0) {
                    flag = 0;
                }
            }
            blank.insert(seat);
        }

        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
