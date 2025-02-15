/*
    MD Rifat 
    
    country Bangladesh
*/

#include <bits/stdc++.h>
using namespace std;

bool hasDistinctDigits(int year) {
    string s = to_string(year);
    set<char> digits(s.begin(), s.end());
    return digits.size() == s.size();
}

int main() {
    int n;
    cin >> n;

    n++;
    while (!hasDistinctDigits(n)) {
        n++;
    }

    cout << n << endl;
    return 0;
}
