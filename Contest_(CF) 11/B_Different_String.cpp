#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        bool x = true;
        for (int i = 0; i < s.length() - 1; i++)
        {
            if (s[i] != s[i + 1])
            {
                x = false;
                break;
            }
        }

        if (!x)
        {   
            char p = s[0];
            int len = s.length();
            for (int i = 0; i < len - 1; i++)
            {
                s[i] = s[i+1];
            }
            s[len -1] =  p;
            cout << "YES" << endl<< s << endl;
        }
        else cout << "NO" << endl;
    }

    return 0;
}