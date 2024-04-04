#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;

        for (int i = 0; i < n; i++) {
            string s1, s2;
            cin >> s1 >> s2;
            int score = 0;

            for (int j = 0; j < s1.length() && j < s2.length(); j++)
            {
                if (s1[j] == s2[j])
                    continue; 
                else if ((s1[j] == 'R' && s2[j] == 'S') || (s1[j] == 'S' && s2[j] == 'P') || (s1[j] == 'P' && s2[j] == 'R'))
                    score++;
            }
            cout << score << endl;
        }
    }
    return 0;
}
