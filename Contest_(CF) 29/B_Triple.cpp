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
    while(t--)
    {
        int n, ans = -1;
        cin >> n;
        vector<int> a(n);
        for (int i=0; i<n; i++) cin >> a[i];

        map<int, int> freq;
        for (int i=0; i<n; i++){
            freq[a[i]]++;
            if (freq[a[i]] > 2){
                ans = a[i];
            }
        }
        cout << ans << endl;
    }
    return 0;
}