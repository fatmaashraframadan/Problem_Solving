#include <iostream>
#include<bits/stdc++.h>


using namespace std;

int main()
{
    int T;
    cin >> T;
    for(int t = 0 ; t < T; t++)
    {
        long long x, y, a, b,tmp, tmp2, tmp3;
        cin >> x >> y >> a >> b;
        tmp = y-x;
        tmp3 = a+b;
        tmp2 = (x+y) ;
        if(tmp % tmp3 == 0)
        {
            cout << tmp /tmp3<<endl;
        }
        else
        {
            cout << "-1"<<endl;
        }
    }

    return 0;
}
