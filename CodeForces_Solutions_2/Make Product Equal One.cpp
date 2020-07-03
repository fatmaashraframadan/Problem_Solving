#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n,  counter = 0;
    int res = 1 , x;
    bool ok =0;
    cin >> n;
    for(int i = 0 ; i < n ; i++)
    {
        cin >>x;
       if(x >= 1)
       {
           res*=1;
           counter += x-1;
       }
       else if(x <= -1)
       {
           res*=-1;
           counter+=(-1-x);

       }
       else if(!x)
       {
            ok = 1;
           counter++;
           //cout << x<<endl;
       }
    }
    if(ok || res==1)
        cout << counter<<endl;
    else
        cout << counter+2<<endl;

    return 0;
}
