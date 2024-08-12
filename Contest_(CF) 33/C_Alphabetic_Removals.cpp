#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    vector<int> count(26, 0);
    for (char c : s) {
        count[c - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        if (k == 0) break;
        if (count[i] <= k) {
            k -= count[i];
            count[i] = 0;
        } else {
            count[i] -= k;
            k = 0;
        }
    }

    string result;
    for (char c : s) {
        if (count[c - 'a'] > 0) {
            result += c;
            count[c - 'a']--;
        }
    }

    cout << result << endl;
    return 0;
}
