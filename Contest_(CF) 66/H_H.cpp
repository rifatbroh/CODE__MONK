/*
    MD Rifat 
    
    country Bangladesh
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    // same as iteration B
    int t;
    cin >> t;

    // while(t--) {
    for (int i=1; i<=t; i++) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i=0; i<n; i++) cin >> v[i];
        sort(v.begin(), v.end());

        int cnt = 0;
        for (int i=0; i<n-2; i++) {
            for (int j=i+1; j<n-1; j++) {
                for (int k=j+1; k<n; k++) {
                    if (v[i]+v[j] > v[k])
                        cnt++;
                }
            }
        }

        // Reduce complexity

        // for (int i=2; i<n; i++) {
        //     if (v[i-1]+v[i-2] > v[i])
        //         cnt++;
        // }
        //cout << cnt << endl;
        cout << "Case "<<i << ": "<< cnt << endl;
    }
    return 0;
}