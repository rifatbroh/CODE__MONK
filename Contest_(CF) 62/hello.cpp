/*
    MD Rifat 
    
    country Bangladesh
*/

#include<bits/stdc++.h>
using namespace std;

// void binary (int n, int val) {
//     int cnt = 0;
//     int l = 0, r = n-1;
//     while (l < r) {
//         int mid = (l+r)/2;
//         if (mid == val)
//             break;
//         else if (mid < val) {
//             cnt++;
//             l++;
//         } 
//         else {
//             cnt++;
//             r--;
//         }
//     }
//     cout << cnt << endl;
// }
int main()
{
    int n, val;
    cin >> n >> val;

    int cnt = 0;
    int l = 1, r = n-1;
    while (l < r) {
        int mid = (l+r)/2;
        if (mid == val) 
            break;
        else if (mid < val) {
            cnt++;
            l = mid+1;
        } 
        else {
            cnt++;
            r = mid-1;
        }
    }
    if (cnt == 0)
        cout << "1" << endl;
    else
        cout << cnt << endl;
    return 0;
}