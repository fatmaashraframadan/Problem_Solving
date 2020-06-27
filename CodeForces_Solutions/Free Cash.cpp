#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int Time[24][60]={0};
    for(int i = 0 ; i < n ; i++)
    {
        int x , y;
        cin>>x>>y;
        Time[x][y]++;
    }
    int Max = -1;
    for(int i = 0 ; i < 24 ; i++)
    {
        for(int j = 0 ; j < 60 ; j++){
            Max = max(Max , Time[i][j]);
        }

    }
cout<<Max<<endl;


    return 0;
}
