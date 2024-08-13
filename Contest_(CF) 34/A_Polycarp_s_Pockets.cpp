/*
    MD Rifat 
    
    country Bangladesh
*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<ll> v(n);
    for (int  i = 0; i <n; i++) cin>>v[i];       
    sort(v.begin(), v.end());

    ll cnt=1, mx=0;
    for (int i = 0; i < n; i++)
    {
        if(v[i]==v[i+1]){
            cnt++;
        }
        else{
            mx=max(mx, cnt);
            cnt=1;
        }
    }
    cout<< mx <<endl;
    return 0;
}
