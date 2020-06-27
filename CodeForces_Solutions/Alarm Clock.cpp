#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin>>T;
    for(int t = 0 ; t < T ; t++)
    {
        long long a, b, c, d;
        cin>>a>>b>>c>>d;
        if (b>=a)
            cout<<b<<endl;
        else if(d>=c )
            cout<<"-1"<<endl;

        else
        {
            long long x =a-b;
            long long y =c-d;
            long long z;
            if(x%y==0)
            {
                z=x/y;
            }
            else
            {
                z=(x/y)+1;
            }
            cout<<(b+(z*c))<<endl;
        }
    }
    return 0;
}
