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

    while(t--) {
        int a, b;
        cin >> a >> b;

        int cnt = 0;
        while(a%b !=0) {
            a++;
            cnt++;
        }
        cout << cnt  << endl;
    }
    return 0;
}