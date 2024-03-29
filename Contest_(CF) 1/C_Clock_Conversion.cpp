#include<bits/stdc++.h>


using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int h, m;
        char colon;

        stringstream ss(s);
        ss >> h >> colon >> m;

        string time;
        if (h < 12)
            time = "AM";
        else
            time = "PM";

        if (h == 0)
            h = 12;
        else if (h > 12)
            h -= 12;

        if (h < 10)
            cout << "0";
            
        cout << h << ":";
        if (m < 10) {
            cout << "0";
        }
        cout << m << " " << time << endl;
    }
    return 0;
}