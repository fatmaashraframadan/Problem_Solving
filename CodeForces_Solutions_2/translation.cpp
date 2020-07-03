#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;
    if(s==t)
    {
        cout << "NO"<<endl;
        return 0;
    }
//    sort(s.begin(), s.end());
//    sort(t.begin(), t.end());

    reverse(t.begin() , t.end()))
    for(int i = 0,j=t.size()-1 ; i < s.size() ,j>=0; j--,i++)
    {
        if(s[i] != t[j])
        {
            cout << "NO"<<endl;
            return 0;
        }
    }
    cout <<"YES"<<endl;
    return 0;
}
