/*
    MD Rifat 
    
    country Bangladesh
*/

#include<bits/stdc++.h>
using namespace std;
signed main()
{
  int t; 
  cin >> t;

  while (t--)
  {
    int x, y, k; 
    cin >> x >> y >> k;
    int mn = min(x, y);
    cout << "0 " << mn << " " << mn << " 0" << endl;
    cout  << "0 0 " << mn << " " << mn << endl;

  }
}