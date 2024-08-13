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
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> v;

        char track = '1';
        for (char c : s){
            if (c == '1')
                v.push_back(1);
            if (c == '0' && track == '1')
                v.push_back(0);

            track = c;
        }
        int one = 0, zero = 0;
        for (int i=0; i<v.size(); i++){
            if (v[i] == 1)
                one++;
            else
                zero++;
        }
        // majority depends 1
        if (one > zero)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}