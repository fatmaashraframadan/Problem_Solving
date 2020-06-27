#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n , m ,c;
    int rem;
    while(cin >> n >> m >> c)
    {
        if(n == 0 && m == 0 && c ==0)
            break;
        if(c == 1)
           rem = 1;
        else
            rem = 0;
        cout <<((n-7) * (m-7) +rem)/2<<endl;
    }
    return 0;
}
