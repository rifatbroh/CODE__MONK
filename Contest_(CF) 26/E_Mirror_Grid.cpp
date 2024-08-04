/*
    MD Rifat Hossain

    Institute:- BAIUST
    Country:- BANGLADESH
*/

#include<bits/stdc++.h>
using namespace std;

#define OLD_MAXTAN                 \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long
#define ld long double
#define yes "YES"
#define no "no"
#define PI 3.1415926535897932384626433832795

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

void solve()
{
    /*let's play*/
    int n;
    cin>>n;
    vector<vector<char>> v(n,vector<char>(n));
    for(int i =0;i<n;i++){
        for(int j =0;j<n;j++){
            cin>>v[i][j];
        }
    }
    int low = 0,high = n-1,ans =0,count;
    while(low<high){
        for(int i = low;i<=high-1;i++){
            count= 0;
            if(v[low][i]=='0'){
                count++;
            }
            if(v[i][high] == '0'){
                count++;
            }
            if(v[high][n-1-i]=='0'){
                count++;
            }
            if(v[n-i-1][low] == '0'){
                count++;
            }
            ans+=min(count,4-count);
        }
        low++;
        high--;
    }
    cout<<ans;
}
 
int main()
{
    OLD_MAXTAN
    int t;
    cin>>t;
    while(t--)
    {
        solve();
        cout<<"\n";
    }
    return 0;
}