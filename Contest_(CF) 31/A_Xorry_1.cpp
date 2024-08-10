#include <bits/stdc++.h>
using namespace std;

long long bit_floor(long long x) {
    // Find the largest power of 2 less than or equal to x
    if (x == 0) return 0;
    long long p = 1;
    while (p <= x) p <<= 1;
    return p >> 1;
}

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long x;
        cin >> x;
        cout << (x ^ bit_floor(x)) << " " << bit_floor(x) << endl;
    }
}
