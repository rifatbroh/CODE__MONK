/*
    MD Rifat 
    
    country Bangladesh
*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin >> n;
    ll cnt = 0;

    while (n != 0) {
        if (n >= 100) {
            n -= 100;
            cnt++;
        }
        else if (n >= 20) {
            n -= 20;
            cnt++; 
        }
        else if (n >= 10) {
            n -= 10;
            cnt++;
        }
        else if (n >= 5) {
            n -= 5;
            cnt++;
        }
        else if (n >= 1) {
            n -= 1;
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}