#include <iostream>
#include<bits/stdc++.h>

using namespace std;

char arr[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y','z' };
bool res[26] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

bool isPanagram(string s, int n)
{

    for(int i = 0 ; i < 26 ; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            if(arr[i] == s[j])
            {
//                cout << arr[i];
//                cout << s[i];
                res[i] = 1;
                break;
            }
            else
                continue;
        }
    }
    for(int i = 0 ; i < 26 ; i++)
    {
        if(res[i] == 0)
        {

            return false;
        }
        else
        {
            continue;
        }
    }
    return true;
}
int main()
{
    int n ;
    cin >> n;
    string s;
    cin >> s;
    for(int i = 0 ; i < n ; i++)
    {
        if(isupper(s[i]))
            s[i] = tolower(s[i]);
    }
    //memset(res, 0, 26);
    //isPanagram(s, n);
    if(!isPanagram(s, n))
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }

    return 0;
}
