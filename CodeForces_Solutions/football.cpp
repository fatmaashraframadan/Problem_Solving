#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n , counter1 = 0, counter2 =0;
    string s[101];
    cin >>n;
    for(int i = 0 ; i < n ;i++)
    {
        cin >> s[i];
    }
    sort(s,s+n);
    cout<<s[n/2]<<endl;


    return 0;
}
