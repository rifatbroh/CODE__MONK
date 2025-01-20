/*
    MD Rifat
    
    Country: Bangladesh
*/

#include <bits/stdc++.h>
using namespace std;

bool is_palindrome(string s) {
    int n = s.size();
    for (int i = 0; i < n / 2; ++i) {
        if (s[i] != s[n - i - 1])
            return false;
    }
    return true;
}

int main() {
    string s;
    cin >> s;

    if (!is_palindrome(s))
        cout << s.size() << endl;
    else {
        bool same = true;
        for (int i = 1; i < s.size(); i++) {
            if (s[i] != s[0]) {
                same = false;
                break;
            }
        }
        if (same)
            cout << 0 << endl;
        else
            cout << s.size() - 1 << endl;
    }

    return 0;
}
