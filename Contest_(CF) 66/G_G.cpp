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
    
    int cnt = 0;
    for (int i=0; i<n; i++) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        if (a+c == b+d)
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}