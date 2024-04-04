#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        int cnt = 0;
        
        int arr[] = {1, 2, 3, 4, 5, 6, 7};
        
        for (int i = 0; i < n; i++) {
            if (arr[i % 7] == 2)
                cnt++;
        }

        cout << cnt << endl;
    }
    return 0;
}
