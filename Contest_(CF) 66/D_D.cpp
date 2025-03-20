/*
    MD Rifat Hossain

    Country:- BANGLADESH
*/

#include <bits/stdc++.h>
using namespace std;

#define OLD_MAXTAN                 \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

#define ll long long
#define ld long double
#define yes cout << "YES"
#define no cout << "NO"
#define pb push_back
#define vi vector<int>
#define vin(a) for (auto &it : a) cin >> it;
#define vout(a) for (auto &it : a) cout << it << " ";
#define vp vector<pair<int, int>>
#define mp map<int, int>
#define vec(v) v.begin(), v.end()
#define PI 3.1415926535897932384626433832795

const int MAX_N = 1e7 + 5; // ✅ শুধুমাত্র এটি থাকবে
vector<bool> is_prime(MAX_N, true);

// Sieve of Eratosthenes
void sieve() {
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i < MAX_N; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j < MAX_N; j += i) {
                is_prime[j] = false;
            }
        }
    }
}

// Count primes in range [1, N-1]
int countPrimes(int N) {
    int cnt = 0;
    for (int i = 1; i < N; i++) {
        if (is_prime[i]) cnt++;
    }
    return cnt;
}

int main() {
    OLD_MAXTAN;
    sieve(); // ✅ একবারই রান করানো হবে
    
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        cout << countPrimes(N) << "\n"; // ✅ সরাসরি countPrimes() কল করা হলো
    }
    
    return 0;
}
