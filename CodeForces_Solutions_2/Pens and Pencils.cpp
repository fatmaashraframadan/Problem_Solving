#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    for(int t = 0 ; t < T ; t++)
    {
        int  a, b, c, d, k;
        int res1, res2;
        cin >>  a >> b >> c >> d >> k;
        if(c >= a)
            res1 = 1;
        else
        {
            if(a%c==0)
            {
                res1 = ceil(a/c);
            }
            else
                res1 = ceil(a/c)+1;
        }

        if(d >= b)
            res2=1;
        else
        {
            if(b%d==0)
            {
                res2 = ceil(b/d);
            }
            else
                res2 = ceil(b/d)+1;
        }
        if((res1 + res2) <= k)
        {
            cout << res1 << " "<<res2<<endl;
        }
        else
            cout << "-1"<<endl;
    }
    return 0;///80 72 20 12 10
}
