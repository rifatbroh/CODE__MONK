/*
    MD Rifat 
    
    country Bangladesh
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i=0; i<n; i++) cin >> v[i];

    int flag = 0;
    for (int i=0; i<n; i++) {
        if (v[i] == 1) {
            flag = 1;
            break;
        }
    }
    if (flag)
        cout << "HARD" << endl;
    else
        cout << "EASY" << endl;
    return 0;
}