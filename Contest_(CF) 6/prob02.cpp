#include <bits/stdc++.h>
using namespace std;

int main() {
    string str1, str2;
    cin >> str1 >> str2;

    // Reserve enough space to accommodate the concatenated string
    str1.reserve(str1.length() + str2.length());

    int i;
    for (i = 0; str1[i] != '\0'; i++);

    int j;
    for (j = 0; str2[j] != '\0'; j++, i++) {
        str1[i] = str2[j];
    }
    str1[i] = '\0';

    cout << str1 << endl;

    return 0;
}
