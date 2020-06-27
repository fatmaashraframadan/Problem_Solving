#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n = 0 , q;
    cin >> q;
    for(int i= 0 ; i< q ;i++)
    {
        char c1 , c2 ,c3;
        cin >> c1 >> c2 >>c3;
        if((c2 == '+' && c3 == '+' ))
            n++;
        else if (c2 == '+' && c1=='+')
            ++n;
        else if(c2 == '-' && c1=='-')
            --n;

        else if (c2 == '-' && c3=='-')
            n--;
    }
    cout << n;
    return 0;
}
