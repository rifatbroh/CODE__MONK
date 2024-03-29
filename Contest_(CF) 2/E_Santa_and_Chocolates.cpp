#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, diff;
        cin >> n >> diff;
        int sum = 0;
        int a[n];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }

        int random_arry[n];
        int random_sum = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> random_arry[i];
            random_sum += random_arry[i];
        }

        if(sum == random_sum)
        {
            bool found = false;
            for(int i = 0; i < n; i++)
            {
                for(int j = i + 1; j < n; j++) {
                    if(abs(random_arry[i] - random_arry[j]) == diff)
                    {
                        found = true;
                        break;
                    }
                }
                if(found)
                    break;
            }
            if(found)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
