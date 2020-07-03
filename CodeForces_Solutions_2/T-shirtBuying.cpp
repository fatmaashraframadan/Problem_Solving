#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, buyers , x;
    bool found = false;
    cin >> n;
    vector<int>crossed;
    vector<int>Price;
    vector<int>frontt;
    vector<int>endt;
    vector<int>Color;
    for(int i = 0 ; i  < n ; i ++)
    {
        cin >> x;
        Price.push_back(x);
    }
    for(int i = 0 ; i  < n ; i ++)
    {
        cin >> x;
        frontt.push_back(x);
    }
    for(int i = 0 ; i  < n ; i ++)
    {
        cin >> x;
        endt.push_back(x);
    }
    cin >> buyers;
    for(int i = 0 ; i  < buyers ; i ++)
    {
        cin >> x;
        Color.push_back(x);
    }
    for(int i = 0 ; i < buyers ;i++)
    {
        int j , k;
        int  m = Color[i];
        for(  j = 0 ; j < frontt.size() ; j++)
        {
            if(frontt[j] == m)
            {
                crossed.push_back(Price[j]);
            }
        }
        for(  k = 0 ;k < endt.size() ; k++)
        {
            if(endt[j] == m)
            {
                crossed.push_back(Price[k]);
            }
        }
        int MIN = crossed[0];
        for(int p = 0 ; p < crossed.size();p++)
        {
            if(crossed[p] < MIN)
                MIN = crossed[p];
        }

    }
    return 0;
}
