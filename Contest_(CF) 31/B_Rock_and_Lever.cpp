// /*
//     MD Rifat 
    
//     country Bangladesh
// */

// #include<bits/stdc++.h>
// #define ll long long
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while(t--)
//     {
//         ll n;
//         cin >> n;
//         vector<ll> v(n);
//         for (ll i=0; i<n; i++) cin >> v[i];

//         ll ans = 0;
//         for (ll i=0; i<n; i++){
//             for (ll j=i+1; j<n; j++){
//                 if ((v[i] & v[j]) >= (v[i] ^ v[j])){
//                     ans++;
//                 }
//             }
//         }
//         cout << ans << endl;
//     }
//     return 0;
// }


/*
    MD Rifat Hossain
    BAIUST, Bangladesh
*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++) cin >> v[i];

        ll ans = 0;
        
        // Iterate over each bit position from 29 down to 0
        for (int j = 29; j >= 0; j--)
        {
            ll cnt = 0;
            
            // Count how many numbers have their most significant bit at position j
            for (ll i = 0; i < n; i++)
            {
                if (v[i] >= (1LL << j) && v[i] < (1LL << (j + 1)))
                {
                    cnt++;
                }
            }
            
            // Add the number of pairs that can be formed from these numbers
            ans += cnt * (cnt - 1) / 2;
        }
        
        cout << ans << endl;
    }
    return 0;
}
