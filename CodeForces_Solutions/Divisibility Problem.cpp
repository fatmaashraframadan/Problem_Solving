#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long T;cin>>T;
    for(long t = 0 ; t < T; t++)
    {
        long long n , m;cin>>n>>m;
        long long res = n%m;
        if(res == 0)
        {
            cout<<"0"<<endl;
        }
        else{
            cout<<m-res<<endl;
        }
    }
    return 0;
}
