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
        int n, cal;
        cin >> n;
        vector<int> v(n);
        for (int i=0; i<n; i++) cin >> v[i];

        int mx = 0;
        for (int i=0; i<n; i++){
            mx = max(mx, v[i]);
        }

        vector<int> ar = v;
        sort(ar.begin(), ar.end());
        int mx_1 = ar[n-1];
        int mx_2 = ar[n-2];

        for (int i=0; i<n; i++){
            if (v[i] == mx_1)
                cout << v[i] - mx_2 <<" ";
            else
                cout << v[i] - mx_1 << " ";
        }
        
        cout << endl;
    }
    return 0;
}