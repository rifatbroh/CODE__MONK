#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) 
            cin >> a[i];
        
        sort(a.begin(), a.end());

        int i = 0, j = n - 1;
        int add = 0;
        while (i <= j)
        {
            if (i == j)
                add += a[i];
            else
            {
                add += a[j];
                add -= a[i];
            }
            i++;
            j--;
        }
        cout << add << endl;
    }
    return 0;
}
