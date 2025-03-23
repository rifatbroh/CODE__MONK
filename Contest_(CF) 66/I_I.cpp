/*
    MD Rifat 
    
    country Bangladesh
*/

#include<bits/stdc++.h>
using namespace std;
const int N = 1000000;

int main()
{
    int l=0, r=N;
    string s;
    
    for (int i=0; i<25; i++) {
        int mid = (l+r)/2;
        cout << mid << endl;
        cin >> s;

        if (s == "Bingo")
            break;
        else if (s == "Bigger")
            l = mid+1;
        else
            r = mid-1;
    }
    return 0;
}