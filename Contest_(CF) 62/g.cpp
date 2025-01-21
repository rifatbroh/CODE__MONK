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

    vector<int> v;
    while(n != 0) {
        if (n > 1) {
           v.push_back(1);
           n--; 
        }
        else if (n > 5) {
            v.push_back(5);
            n = n-5;
        }
        else if (n > 10) {
            v.push_back(10);
            n = n-10;
        }
        else if (n > 50) {
            v.push_back(50);
            n = n-50;
        }
        else if (n > 100) {
            v.push_back(100);
            n = n-100;
        }
        else {
            v.push_back(500);
            n = n-500;
        }
    }

    for (auto x : v) {
        cout << x << " " ;
    }
    return 0;
}