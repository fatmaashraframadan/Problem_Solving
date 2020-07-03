#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, k ;
    string g;
    cin >> n >> k;
    vector<char>res;
    char arr[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    for(int i = 0 ; i < k ; i++)
    {
        res.push_back(arr[i]);
    }
    int i = 0;
    for(int f = 0 ; f < n ; f++)
    {
        if(k < res.size())
        {
            g+=res[f];
            n = n-f;
        }

        else
        {
            while(n != 0)
            {
                g+=res[i];
                i++;
                if(i >= res.size())
                {
                    i = 0;
                }
                n--;
            }

        }
    }
    cout << g<<endl;
    return 0;
}
