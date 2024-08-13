/*
    MD Rifat 
    
    country Bangladesh
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];

        int q;
        cin >> q;
        while (q--)
        {
            string s;
            cin >> s;

            if (s.size() != n)
                cout << "NO" << endl;
            else
            {
                map<int, char> Char;
                map<char, int> Num;
                bool isMatch = true;

                for (int i = 0; i < n; i++)
                {
                    int num = v[i];
                    char ch = s[i];

                    if (Char.count(num) && Char[num] != ch)
                        isMatch = false;
            
                    if (Num.count(ch) && Num[ch] != num)
                        isMatch = false;

                    Char[num] = ch;
                    Num[ch] = num;
                }

                if (isMatch)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
        }
    }
    return 0;
}
