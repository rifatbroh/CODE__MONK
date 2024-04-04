#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        
        // days calculate
        int time = x*y;
        int day = z*24*60;
        
        if (time <= day)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}