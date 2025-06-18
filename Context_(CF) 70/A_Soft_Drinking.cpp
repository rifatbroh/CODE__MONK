/*
    MD Rifat 
    
    country Bangladesh
*/

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int x = k * l;
    int y = c * d;
    int total_salt = p;

    int toasts_by_drink = x / nl;
    int toasts_by_limes = y;
    int toasts_by_salt = total_salt / np;

    int total_toasts = min({toasts_by_drink, toasts_by_limes, toasts_by_salt});
    cout << total_toasts / n << endl;

    return 0;
}
