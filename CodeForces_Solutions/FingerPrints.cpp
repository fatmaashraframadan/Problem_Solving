#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    vector<int>nvec;
    vector<int>mvec;
    cin >> n >> m;
    for(int i = 0 ; i < n ; i++)
    {
        int x;
        cin >>x;
        nvec.push_back(x);
    }

    for(int i = 0 ; i < m ; i++)
    {
        int y;
        cin >>y;
        mvec.push_back(y);
    }

    for(int i = 0 ; i < nvec.size() ; i++)
    {
        for(int j = 0 ; j < mvec.size() ; j++)
        {
            if(nvec[i] == mvec[j])
                cout << nvec[i] << " ";
            else
                continue;
        }
    }
    return 0;
}
