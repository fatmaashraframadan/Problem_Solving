#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T;cin>>T;for(int t = 0; t < T ;t++)
    {
        int n,m;cin>>n>>m;if(n==1 || m==1 || (n==2 && m==2))
        {
            cout<<"YES"<<endl;
        }else
        cout<<"NO"<<endl;
    }
    return 0;
}
