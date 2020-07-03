#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s, a;
    cin >> s >> a;
    int len1 = s.size(), len2 = a.size();
    if(a==s)
    {
        cout << "-1"<<endl;
        return 0;
    }

    else if(len1 <= len2)
    {
        int counter = 0;
        for(int i = 0 ; i < len1 ; i++)
        {
            if(s[i] != a[i])
                counter++;
        }
        if(counter < len2)
        {
            cout << len2 << endl;
            return 0;
        }
        cout << counter << endl;
        return 0;
    }

    else if(len1 >= len2)
    {
        int counter = 0;
        for(int i = 0 ; i < len2 ; i++)
        {
            if(s[i] != a[i])
                counter++;
        }
        if(counter < len1)
        {
            cout << len1 << endl;
            return 0;
        }
        cout << counter << endl;
        return 0;
    }
    return 0;
}
