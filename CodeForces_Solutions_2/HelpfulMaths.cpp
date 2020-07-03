#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    vector<int>Intvec;
    vector<char>Charvec;
    cin >> s;
    for(int i = 0 ; i < s.size() ; i++)
    {
        if(s[i] >= 48 && s[i] <= 57)
        {
            s[i] = s[i] - '0';
            Intvec.push_back(s[i]);
        }
        else if(!isalpha(s[i]))
            Charvec.push_back(s[i]);
    }
    sort(Intvec.begin(),Intvec.end());
    int j = 0;
    for(int i = 0 ; i < Intvec.size() ; i++)
    {

        if(Charvec.size() != 0 && j < Charvec.size())
        {
            cout << Intvec[i]<<Charvec[j];
            j++;
        }
        else
            cout << Intvec[i];
    }
    return 0;
}
