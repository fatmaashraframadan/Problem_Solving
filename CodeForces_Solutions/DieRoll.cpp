#include <iostream>
#include<bits/stdc++.h>

using namespace std;


int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}


void lowest(int& den3, int& num3)
{

    int common_factor = gcd(num3, den3);

    den3 = den3 / common_factor;
    num3 = num3 / common_factor;
}
int main()
{
    int w, y, D = 0;
    cin >> w >> y;
    int m = 6;
    int res = max(w,y);
    if(res == 6)
    {
        cout << "1"<<"/"<<"6"<<endl;
        return 0;
    }
    else
    {
        while(true)
        {
            if(res <= 6)
            {
                D++;
                res++;
            }
            else
                break;
        }
        lowest(m,D);
        cout << D<<"/"<<m<<endl;
    }

    return 0;
}
