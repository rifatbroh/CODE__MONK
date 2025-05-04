#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n, i, a[26] = {0};
    cin >> n;
    cin.ignore();
    string s;
    cin >> s;

    for(i=0; i<n; i++)
        if(s[i] >= 65 && s[i] <= 90)
            a[s[i] - 65]++;
        else
            a[s[i] - 97]++;

    for(i=0; i<26; i++)
        if(!a[i])
        {
            cout << "NO\n";
            return 0;
        }
    cout << "YES\n";

    return 0;
}