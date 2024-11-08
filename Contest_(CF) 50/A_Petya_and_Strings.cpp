/*
    MD Rifat 
    
    country Bangladesh
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    // Convert both strings to lowercase
    for (int i = 0; i < a.size(); i++) {
        a[i] = tolower(a[i]);
        b[i] = tolower(b[i]);
    }

    // Compare the strings lexicographically
    if (a < b) {
        cout << "-1" << endl;
    } else if (a > b) {
        cout << "1" << endl;
    } else {
        cout << "0" << endl;
    }

    return 0;
}
