#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n , t , k , d;
    cin >> n >> t >> k >> d;
 int sol = (d+t)/t;
    if(sol*k < n)
    {
        cout << "YES"<<endl;
    }
    else
        cout << "NO"<<endl;
    return 0;
}
