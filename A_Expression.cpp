#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int arr[] = {a + b + c, a + (b * c), a * (b + c), a * b * c, (a + b) * c};

    cout << *max_element(arr, arr + 5) << endl;
    return 0;
}
