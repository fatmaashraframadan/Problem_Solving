#include <iostream>
#include<bits/stdc++.h>

using namespace std;

char MAT[10][10];

int main()
{
    int n, m, MAXEATS = 0;
    bool add = true;
    cin >> n >> m;
    for(int i = 0 ; i < n ; ++i)
    {
        for(int j = 0 ; j < m ; ++j)
        {
            char t;
            cin >> t;
            MAT[i][j] = t;
        }
    }


    for(int i = 0 ; i < n ; ++i)
    {
        for(int j = 0 ; j < m ; ++j)
        {
            if(MAT[i][j] == 'S')
                add&&false;
            else
                add&&true;
        }
        if(add)
            ++MAXEATS;
    }

    for(int j = 0 ; j < m ; ++j)
    {
        for(int i = 0 ; i < n ; ++i)
        {
            if(MAT[i][j] == 'S')
                add&&false;
            else
                add&&true;
        }
        if(add)
            ++MAXEATS;
    }

    cout << MAXEATS <<endl;


    return 0;
}
