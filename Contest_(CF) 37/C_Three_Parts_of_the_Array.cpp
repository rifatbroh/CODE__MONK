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
    cin >> n;
    vector<int> v(n);
    for (int i=0; i<n; i++) cin >> v[i];

    ll sum1 = 0, sum2 = 0, ans = 0;
    int l = 0, r = n-1;
    while(l <= r){
        if (sum1 < sum2){
            sum1 += v[l];
            l++;
        }
        else{
            sum2 += v[r];
            r--;
        }
        if (sum1 == sum2)
            ans = sum1;
    }
    cout << ans << endl;
    return 0;
}