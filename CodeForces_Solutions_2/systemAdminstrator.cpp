#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, st_1 = 0, st_2 = 0, en_1 = 0, en_2 = 0, x, nom_1, nom_2;
    cin >> n;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> x;
        cin >> nom_1 >> nom_2;
        if(x == 1)
        {
            st_1+=nom_1;
            en_1+=nom_2;
        }
        else if(x == 2)
        {
            st_2+=nom_1;
            en_2+=nom_2;
        }
    }
    if(st_1 >= en_1)
    {
        cout <<"LIVE"<<endl;
    }
    else
    {
        cout <<"DEAD"<<endl;
    }
    if(st_2 >= en_2)
    {
        cout <<"LIVE"<<endl;
    }
    else
    {
        cout <<"DEAD"<<endl;
    }
    return 0;
}
