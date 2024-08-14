#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes her
	
	int a, b, x, y;
	cin >> a >> b >> x >> y;
	
	 int mx = max(a,b);
	 int mn = min(a,b);
	
    if (x > y){
        cout << mx << endl;
    }
    else{
        cout << mn << endl;   
    }
}
