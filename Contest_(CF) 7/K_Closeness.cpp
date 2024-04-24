#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        a[i] = a[i]%k;
	    }
	    sort(a,a+n);
	    int ct= a[n-1]-a[0];
	    for(int i=0;i<n-1;i++){
	        ct=min(ct,a[i]+k-a[i+1]);
	    }
	    cout<<ct<<endl;
	}

}
