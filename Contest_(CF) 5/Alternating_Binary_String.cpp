#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int cnt = 0;
        for (int i=1; i<=n; i++)
        {
            if (s[i] == s[i - 1])
            {
                cnt++;
            }
        }
        int value = min(cnt, cnt+1);
        cout << value << endl; 
    }
    return 0;
}