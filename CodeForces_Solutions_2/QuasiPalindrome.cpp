#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int counter = 0;
    for(int i = s.length()-1 ; i >=0  ;i --)
    {
        if(s[i] != '0')
            break;
        counter++;
    }
    for(int i = 0 ; i < counter ;i++)
    {
        s.pop_back();
    }
    int j = s.length() - 1;
    for(int i = 0 ; i < s.length()/2 ;i++)
    {
        if(s[i] != s[j])
        {
            cout << "NO"<<endl;
            return 0;
        }
        j--;
    }
    cout << "YES"<<endl;
    return 0;
}
