/*
    MD Rifat 
    
    country Bangladesh
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int arr[26];

        for(int i=0;i<26;i++) arr[i]=0;
        for(int i=0;i<n;i++) arr[s[i]-65]++;
        
        int ans=0;
        for(int i=0;i<26;i++){
            if(arr[i]>0){
                ans+=arr[i] + 1;
            }
        }
        cout<<ans<<endl;        
    }
    return 0;
}