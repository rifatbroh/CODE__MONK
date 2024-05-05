#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int x;
	    cin >> x;
	    int cal = 100 - x;
	    int res = cal % 10;
	    if (res != 0)
	    {
	        cal -=res;
	    }
	    cout << cal << endl;
	}

}
