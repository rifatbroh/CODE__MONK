#include<bits/stdc++.h>
using namespace std;

int rever (int num)
{
    int ans = 0;
    while(num!=0)
    {
        ans = ans * 10 + num%10;
        num /= 10;
    }
    return ans;
}
int main ()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a, b;
        cin >> a >> b;
        int ans = 0;
        
        //cout << rever(a) << " " << rever(b)<< endl;
        if (a > b)
        {
            cout << "Yes" <<endl;
        }
        else
        {
            if (rever(a) > b)
            {
                cout << "Yes" << endl;
            }
            else if (rever(a) > rever(b))
            {
                cout << "Yes" << endl;
            }
            else if ( a > rever(b))
            {
                cout << "Yes" <<endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }
    return 0;
}