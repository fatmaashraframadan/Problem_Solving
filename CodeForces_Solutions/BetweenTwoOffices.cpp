#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n ;
    cin >>n;
    string s;
    cin >>s;
    int len = s.length();
    if(s[0] == 'S' && s[len-1] == 'F')
        cout <<"YES"<<endl;
    else
        cout <<"NO"<<endl;

    return 0;
}
