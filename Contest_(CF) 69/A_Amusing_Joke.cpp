#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int i, arr[26] = {0};
    string a, b, c;
    cin >> a >> b >> c;

    for(i=0; i<a.length(); i++)
        arr[a[i] - 65]++;
    
    for(i=0; i<b.length(); i++)
        arr[b[i] - 65]++;

    for(i=0; i<c.length(); i++)
        arr[c[i] - 65]--;

    for(i=0; i<26; i++)
        if(arr[i])
        {
            cout << "NO\n";
            return 0;
        }
    cout << "YES\n";

    return 0;
}