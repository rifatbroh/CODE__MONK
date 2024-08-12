/*
    MD Rifat 
    
    country Bangladesh
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    int cnt = 0;
    int left = 0, right = n - 1;

    while (left <= right)
    {
        if (v[left] <= k) {
            cnt++;
            left++;
        } else if (v[right] <= k) {
            cnt++;
            right--;
        } else
            break;
    }

    cout << cnt << endl;
    return 0;
}
