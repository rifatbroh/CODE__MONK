#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--)
    {
        int n, flag = 0;
        cin >> n;
        int a[n];
        for (int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        for (int i=0; i<n; i++)
        {
            if (a[i] >= a[i-1] && a[i] >= a[i+1])
            {
                a[i]--; // increase 1
            }
            if (a[i] != a[1])
            {
                flag = 1;
            }
        }
        if (flag)
            cout << "NO" <<endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}
