/*
    MD Rifat 
    
    country Bangladesh
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> s(n);
    for (int i = 0; i < n; i++) cin >> s[i];

    // Sort strings by length
    sort(s.begin(), s.end(), [](const string &a, const string &b) {
        return a.size() < b.size();
    });

    for (int i = 0; i < n - 1; i++) 
    {
        // if s(i+1) is a subs of s(i)
        if (s[i + 1].find(s[i]) == string::npos) {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
    for (auto str : s) {
        cout << str << endl;
    }

    return 0;
}
