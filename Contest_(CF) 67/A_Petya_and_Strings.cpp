// why man is so crazy :(
    #include <iostream>
    using namespace std;
    
    int main ()
    {
        int i;
        string s, t;
        cin >> s >> t;
        for(i=0; i<s.length(); i++)
        {
            if(s[i] >= 65 && s[i] <= 90)
                s[i] += 32;
            if(t[i] >= 65 && t[i] <= 90)
                t[i] += 32;
        }
        if(s > t)
            cout << 1 << endl;
        if(s == t)
            cout << 0 << endl;
        if(s < t)
            cout << -1 << endl;
    
        return 0;
    }