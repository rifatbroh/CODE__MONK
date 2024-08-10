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
    vector<int> v(n);
    for (int i=0; i<n; i++) cin >> v[i];

    set<int> s;
    vector<int> res;

    for (int i=n-1; i>=0; i--){
        if (s.find(v[i]) == s.end()){
            s.insert(v[i]);
            res.push_back(v[i]);
        }
    }
    reverse(res.begin(), res.end());
    
    cout << res.size() << endl;
    for (int i=0; i<res.size(); i++){
        
        cout << res[i] << " ";
    }
    cout <<endl;
    return 0;
}