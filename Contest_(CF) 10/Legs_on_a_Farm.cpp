#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int cow = n/4;
        int chik = (n-cow*4)/2;
        int animal = cow + chik;

        cout << animal << endl;
    }
    return 0;
}