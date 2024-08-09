/*
    MD Rifat 
    
    country Bangladesh
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    map<string, int> mp;
    string two_gram;
    int cnt = 0;

    for (int i=0; i<n-1; i++){
        string gram = s.substr(i, 2);
        mp[gram]++;

        if (mp[gram] > cnt){
            cnt = mp[gram];
            two_gram = gram;
        }
    }
    cout << two_gram << endl;
    return 0;
}