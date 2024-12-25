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
    while(t--){
        string s;
        cin >> s;
        int n = s.size();
        // if (s.size() == 1){

        // }else{
        //     for (int i=0; i<s.size(); i++){
        //         remove(s.begin(), s.end(), s[i]);
        //         if (s[i] == '0'){
        //             // skip 0
        //             i += 2;
        //         }
        //     }
        // }
        // cout << s.size() << endl;

        int mn = INT_MAX;
        for (int i=0; i<=n-1; i++){
            for (int j=0; j<=i-1; j++){
                string num = {s[j], s[i]};
                if (num == "00" || num == "25" || num == "50" || num == "75"){
                    mn = min(mn, n-j-2);
                }
            }
        }
        cout << mn << endl;
    }
    return 0;
}