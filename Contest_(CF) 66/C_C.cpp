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

    for (int i=1; i<=t; i++) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        map<char, int> mp;
        for (char i : s) {
            // base case etar jonno wrong asche TEST CASE 2
            //Fix below 
            if (islower(i)){
                mp[i]++;
            }
        }
        
        cout << "Case "<< i <<":"<<endl;
        if (mp.empty())
            cout << "-1" << endl;
        else {
            for (auto [key, val] : mp) {
                cout << key << " - " << val << endl;
            }
        }
        cout << endl;
    }
    return 0;
}