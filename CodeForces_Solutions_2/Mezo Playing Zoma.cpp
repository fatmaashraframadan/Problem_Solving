#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int num_of_L(string s)
{
    int x = 0;
    for(int i = 0 ; i < s.size();i++)
    {
        if(s[i] == 'L')
        {
            x++;
        }
    }
    return x;
}

int num_of_R(string s)
{
    int x = 0;
    for(int i = 0 ; i < s.size();i++)
    {
        if(s[i] == 'R')
        {
            x++;
        }
    }
    return x;
}

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int L = num_of_L(s);
    int R = num_of_R(s);
    cout<<L + R + 1 << endl;
    return 0;
}
