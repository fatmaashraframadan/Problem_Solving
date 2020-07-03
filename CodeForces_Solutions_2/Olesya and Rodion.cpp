#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, t,a(1);
    cin >> n >> t;

    string g = "";

    if(n==1 && t==10)
        cout << "-1"<<endl;

    else
    {
        int i = 1;
         cout << t;
         if(t==10) i++;
         for(;i<n;i++)
            cout<<'0';

    }





    //cout <<"-1"<<endl;
    return 0;
}
