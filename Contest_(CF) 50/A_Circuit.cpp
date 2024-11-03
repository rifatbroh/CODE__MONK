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
    while(t!=0)
    {
        int n,c=0,c1=0,mx,mn;
        cin>>n;
        vector<int>v(2*n);
        for(int i=0;i<2*n;i++)
        {
            cin>>v[i];
            if(v[i]==0)
                c++;
            else
                c1++;
        }
        if(c1>c) mx= c;
        else mx = c1;

        if(c%2==0) mn = 0;
        else mn = 1;
        cout<<mn<<" "<<mx<<endl;
        t--;
    }
    return 0;
}
