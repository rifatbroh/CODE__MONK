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
        int n;
        cin >> n;
        string s;
        cin >> s;

        int l=0, r=0;
        //map<int, int> = {l, r};
        int flag = 0;

        for (int i=0; i<s.size(); i++){
            if (s[i] == 'U'){
                r++;
            }
            else if(s[i] == 'D'){
                r--;
            }
            else if(s[i] == 'R'){
                l++;
            }
            else if(s[i] == 'L'){
                l--;
            }
            if (l==1 && r==1){
                flag = 1;
                //break;
            }
        }
        if (flag)
            cout <<"YES"<<endl;
        else
            cout <<"NO"<<endl;
    }
    return 0;
}