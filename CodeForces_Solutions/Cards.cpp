#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n ;
    cin >> n;
    char arr[100005];
    map<char,int>temp;
    temp['n']=0;
    temp['z']=0;
    for(int i = 0 ; i < n; i++)
    {
        cin >> arr[i];
        if(arr[i] == 'n')
            temp['n']++;
        else if(arr[i] == 'z')
            temp['z']++;
    }
    for(int i = 0 ; i < temp['n'] ;i++)
    {
        if(i==0)
            cout<<"1";
        else
            cout<<" 1";
    }
    for(int i = 0 ; i < temp['z'] ;i++)
    {
        if(i==0 && temp['n'] == 0)
            cout<<"0";
        else
            cout<<" 0";
    }


    return 0;
}
