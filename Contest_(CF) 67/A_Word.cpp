/*
    MD Rifat 
    
    country Bangladesh
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int up = 0, lw = 0;

    for (int i=0; i<s.size(); i++) {
        if (isupper(s[i]))
            up++;
        else
            lw++;
    }
    for (int i=0; i<s.size(); i++) {
        if (up <= lw)
            s[i] = tolower(s[i]);
        else
            s[i] = toupper(s[i]);
    }
    cout << s << endl;
    return 0;
}