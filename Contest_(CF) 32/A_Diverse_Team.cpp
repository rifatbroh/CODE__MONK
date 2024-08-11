/*
    MD Rifat Hossain
    BAIUST, Bangladesh
*/

#include<bits/stdc++.h>
using namespace std;

int vis[101];

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> v;
    for (int i = 1; i <= n; i++) {
        int x; 
        cin >> x;

        //if the element hasn't been added before
        if (!vis[x])
            v.push_back(i);

        vis[x]++;
    }

    if (v.size() < k)
        cout << "NO" << endl;
    else {
        cout << "YES" << endl;
        for (int i = 0; i < k; i++)
            cout << v[i] << " ";
        
        cout << endl;
    }

    return 0;
}
