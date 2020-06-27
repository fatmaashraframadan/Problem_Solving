#include <iostream>
#include<bits/stdc++.h>

using namespace std;
/*
for(int i = 0 ; i < n ; i++)
    {

    }
*/

int main()
{
    int n, m, x ,y, nom1 = 0 , nom2 = 0;
    cin >> n ;
    for(int i = 1 ; i <= n ; i++)
    {
        cin >> x;
        nom1 = max(nom1 , x);
    }
    cin >> m;
    for(int i = 1 ; i <= m ; i++)
    {
        cin >>y;
        nom2 = max(nom2 , y);
    }

    cout << nom1 <<"  "<<nom2<<endl;

    return 0;
}
