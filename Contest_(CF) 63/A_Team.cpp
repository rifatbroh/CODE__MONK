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
    int cnt = 0;
    while(t--) {
        int a, b, c;
        cin >> a >> b >> c;

        //int cnt = 0;
        if ((a&&b) || (b&&c) || (c&&a)) {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}