#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin>>T;
    for(int t = 0 ; t < T; t++)
    {
        int n, x;
        cin>>n>>x;
        vector<int>even;
        vector<int>odd;
        for(int i = 0 ; i < n ; i++)
        {
            int u;
            cin >>u;
            if(u%2==0)
                even.push_back(u);
            else
                odd.push_back(u);
        }
        bool p =false;
        for(int i = 1 ; i <= odd.size() && i <= x; i+=2)
        {
            int y = even.size(),z = x-i;
            if(z<=y)
                p=true;
        }
        if(p)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
