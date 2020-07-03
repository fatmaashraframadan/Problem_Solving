#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s, t;
    int T;
    cin >> T;
    for(int x = 0 ; x < T ; x++)
    {
        bool found = false;
        cin >> s >> t;
        for(int i = 0 ; i < s.size() ; i++)
        {
            for(int j = 0 ; j < t.size() ;j++)
            {
                if(s[i] == t[j])
                    found = true;
            }
        }
        if(found)cout << "YES"<<endl;
        else cout << "NO"<<endl;
    }
    return 0;
}
