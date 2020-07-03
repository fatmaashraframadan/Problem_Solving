#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    char arr[30] = {'q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l',';','z','x','c','v','b','n','m',',','.','/'};

    char what;
    cin >> what;
    string s, res="";
    cin >> s;
    for(int i = 0 ; i <s.size() ; i++)
    {
        for(int j = 0 ; j < 29 ; j++)
        {
            if(s[i] == '/')
            {
                  res+='.';
                  break;
            }

            else if(s[i] == arr[j] && what == 'L')
            {
                res+=arr[j+1];
                break;
            }
            else if(s[i] == arr[j] && what == 'R' )
            {
                res+=arr[j-1];
                break;
            }


        }
    }
    cout << res<<endl;
    return 0;
}
