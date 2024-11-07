/*
    MD Rifat 
    
    country Bangladesh
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i=0; i<n; i++) cin >> v[i];

    int cnt = 0;
    int N = v[k-1];
    for (int i=0; i<n; i++){
        if (v[i] >= N && v[i] > 0){
            cnt++;
        }
       
    }
    cout << cnt << endl;
    return 0;
}