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
        string curr = "codeforces";
        string s;
        cin >> s;
        int cnt = 0;

        for (int i=0; i<s.size(); i++)
        {
            if (s[i] != curr[i])
                cnt++;
        }
        cout<< cnt <<endl;
    }
    return 0;
}