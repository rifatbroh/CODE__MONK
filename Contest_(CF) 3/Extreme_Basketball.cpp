#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c=0;
        cin>>a>>b;
        while(true)
        {
            if(a-b>=10)
            {
                break;
            }
            a+=3;
            c++;
        }
        cout<<c<<endl;
    }
    return 0;
} 