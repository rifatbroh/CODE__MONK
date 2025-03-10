/*
    MD Rifat 
    
    country Bangladesh
*/

#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        int arr[n];
        int ev = 0, od = 0;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            ev += (arr[i] % 2 == 0) * arr[i];
            od += (arr[i] % 2 != 0) * arr[i];
        }
        if (ev > od)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}