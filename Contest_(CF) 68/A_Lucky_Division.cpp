/*
    MD Rifat 
    
    country Bangladesh
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    bool flag = false;
    vector<int> v = {4, 7, 44, 47, 74, 77, 444, 447, 477, 744, 747, 774, 777};
    for (int i=0; i<v.size(); i++) {
        if (n % v[i] == 0) {
            flag = true;
            break;
        }
    }
    if (flag)
        cout << "YES" << endl;
    else
        cout<< "NO" << endl;
    return 0;
}