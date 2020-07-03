#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long  n, b, d, x, finall = 0;
    long long  counter = 0 ;
    cin >> n >> b >>d;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> x;
        if(x <= b)
        {
            counter+=x;
        }
        if(counter > d)
        {
            finall++;
            counter = 0;
        }
    }

    cout << finall<<endl ;
    return 0;
}
