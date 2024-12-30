/*
    MD Rifat 
    
    country Bangladesh
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<char> st;
    string s;

    /*
        include space and ignor this;
    */
    getline(cin, s);

    // int cnt = 0;
    // for (auto ch : s){
    //     st.insert(ch);
    //     cnt++;
    // }
    // cout << cnt << endl;

    for (auto ch : s){
        if (islower(ch)){
            st.insert(ch);
        }
    }
    cout << st.size() << endl;
    return 0;
}