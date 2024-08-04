/*
    MD Rifat 
    
    country Bangladesh
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       vector<vector<char>>v(8,vector<char>(8));
       int red=0, blue=0, R=0, B=0;

       for(int i=0;i<8;i++) {
            for(int j=0;j<8;j++)  cin>>v[i][j];
       }
       for(int i=0;i<8;i++)
       {
            R=0;
            for(int j=0;j<8;j++) {
                if(v[i][j]=='R') R++;
                if(R==8) {
                    red=1;
                    break;
                }
            }
       }
       if(red==1)
            cout<<'R'<<endl;
        else {
            for(int i=0;i<8;i++) {
                B=0;
                for(int j=0;j<8;j++) {
                    if(v[j][i]=='B') B++;
                    if(B==8) {
                        blue=1;
                        break;
                    }
                }
            }
            if(blue==1) cout<<"B"<<endl;
        }
    }
    return 0;
}