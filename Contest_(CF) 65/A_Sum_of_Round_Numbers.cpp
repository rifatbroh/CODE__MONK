#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string num;
        cin >> num;
        int zero = 0;
        for (int i = 0; i < num.size(); i++)
        {
            if (num[i] == '0')
                zero++;
        }
        cout << num.size() - zero << endl;
        for (int i = num.size() - 1; i >= 0; i--)
        {
            if (num[i] == '0')
                continue;
            cout << num[i];
            for (int z = 0; z < (num.size() - i - 1); z++)
            {
                cout << '0';
            }
            cout << ' ';
        }
        cout << endl;
    }
}