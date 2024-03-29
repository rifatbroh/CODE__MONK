#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x, y;
        cin >> x >> y;
        int ans = x * y;
        // convert
        string ans_str = to_string(ans);
        if (ans_str.length() == 5)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" <<endl;
        }
    }
    return 0;
}