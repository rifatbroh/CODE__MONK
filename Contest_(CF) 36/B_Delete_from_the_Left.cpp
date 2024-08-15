/*
    MD Rifat Hossain
    
    country Bangladesh
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    string x, y;
    cin >> x >> y;

    int a = x.size();
    int b = y.size();
    int move = 0;

    int i = a - 1;
    int j = b - 1;

    while (i >= 0 && j >= 0 && x[i] == y[j]) {
        i--;
        j--;
    }

    move = (i + 1) + (j + 1);
    cout << move << endl;
    return 0;
}
