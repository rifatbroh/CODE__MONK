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
	for (int i = 0; i < n; i) {
		int x;
		cin >> x;
		cout << x - !(x & 1) << " ";
	}
	
	return 0;
}