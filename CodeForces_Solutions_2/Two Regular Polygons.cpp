#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin>>T;
    for(int t = 0 ; t < T ; t++)
    {
        int n, m;
        cin >> n >> m;
        if(n%m == 0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
