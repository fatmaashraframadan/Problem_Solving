#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin>>T;
    for(int t = 0 ;  t < T ; t++)
    {
        int x, n,m;
        cin>>x>>n>>m;
        while((x/2 + 10) < x && n >0 && x > 0)
        {
            x=(x/2)+10;n--;
        }
        if((m*10) >= x)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
    return 0;
}
