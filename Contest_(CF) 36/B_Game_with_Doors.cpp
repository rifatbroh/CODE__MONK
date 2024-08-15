/*
    MD Rifat 
    
    country Bangladesh
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int l, r, L, R;
	    cin >> l >> r >> L >> R;
	    vector<int> d(105, 0);
	    int v = min(r, R) - max(l, L);

	    if(l < L)
		    d[L - 1] = true;
	    if(L < l)
		    d[l - 1] = true;
	    if(R > r)
		    d[r] = true;
	    if(r > R)
		    d[R] = true;

	    int ans = 0;
	    for(int i = 1; i <= 101; i++) {
		    ans += d[i];
	}

	    if(v < 0)
            ans = 0;
	    cout << max(1, ans + max(0, min(r, R) - max(l, L))) << endl;
    }
    return 0;
}