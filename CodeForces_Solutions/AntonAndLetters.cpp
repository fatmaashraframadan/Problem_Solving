#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    set<char>Distinct;
    getline(cin , s);
    for(int i = 0 ; i < s.size() ; i++)
    {
        if(isalpha(s[i]))
        {
            Distinct.insert(s[i]);
        }
    }

    cout <<Distinct.size()<<endl;
    return 0;
}
