
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x, y;
    for (int i = 1; i < 6; i++)
    {
        for(int j = 1; j<6; j++)
        {
            int a;
            cin>>a;

            if (a == 1)
            {
                x = i;
                y = j;
            }
            

        }
    }
    int ans = (abs(x-3) + abs(y-3));
    cout<<ans;
    
    return 0;
}