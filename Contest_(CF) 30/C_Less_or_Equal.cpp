/*
    MD Rifat Hossain
    BAIUST, Bangladesh
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    for (int i = 0; i < n; i++) 
        cin >> v[i];

    sort(v.begin(), v.end());

    /*
        এই সমস্যায়, তোমাকে এমন একটি সংখ্যা বের করতে হবে
        যেটির থেকে ঠিক k টি সংখ্যা ছোট অথবা সমান হবে। যদি
        এমন কোনো সংখ্যা না থাকে, তাহলে "-1" প্রিন্ট করতে হবে।
    */
    int ans;

    if (k == 0) {
        ans = v[0] - 1;
    } else {
        ans = v[k - 1];
    }

    int cnt = 0;

    for (int i = 0; i < n; i++)
        if (v[i] <= ans) 
            cnt++;

    if (cnt != k || !(1 <= ans && ans <= 1000000000)) {
        cout << "-1" << endl;
        return 0;
    }

    cout << ans << endl;

    return 0;
}
