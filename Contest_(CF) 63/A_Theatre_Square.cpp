/*
    MD Rifat 
    
    country Bangladesh
*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
  ll int m, n, a, ans;
  cin >> m >> n >> a;
  if(m<=a && n<=a)
    ans = 1;
  else if(m<=a)
    ans = ceil((double)n/a);
  else if(n<=a)
    ans = ceil((double)m/a);
  else
    ans = (ceil((double)m/a)) * (ceil((double)n/a));
  cout << ans << "\n";
}