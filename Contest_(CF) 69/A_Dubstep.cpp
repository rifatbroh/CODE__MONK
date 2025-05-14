/*
    MD Rifat 
    
    country Bangladesh
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    vector<string> result;
    string word;

    for (int i = 0; i < s.size(); ) {
        if (s.substr(i, 3) == "WUB") {
            if (!word.empty()) {
                result.push_back(word);
                word.clear();
            }
            i += 3;
        } else {
            word += s[i];
            i++;
        }
    }


    if (!word.empty()) {
        result.push_back(word);
    }

    for (int i = 0; i < result.size(); i++) {
        if (i > 0) cout << " ";
        cout << result[i];
    }
    cout << endl;

    return 0;
}
