/*
    MD Rifat 
    
    country Bangladesh
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    // cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<string> a(n);
        int ans = 1;
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 1; i < n; i++){
            if(a[i][0] == a[i - 1][1])
                ans++;
        }
        cout << ans << endl;
    }
    return 0;
}