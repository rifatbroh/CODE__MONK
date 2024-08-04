/*
    MD Rifat 
    
    country Bangladesh
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;

        //int flag = 0;
        for (int i=0; i<s.size(); i++){
            if (s[i] >= 'a' && s[i] <= 'z'){
                // convert uppercase;
                s[i] = s[i] - 'a' + 'A';
            }
        }
        if (s == "YES")
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}