#include <iostream>
#include<bits/stdc++.h>

using namespace std;


int main()
{
    int n;
    cin >> n;
    int k;
    float x = -10000000, f, f2;
    for(int i =  0; i  < n ; i++)
    {
        cin >> f;
        if(f < 0)
        {
            x = max(x, f);
            continue;
        }
        f2 = f;
        f = sqrt(f);
        if(f!=ceil(f))
        {
            x = max(x, f2);
        }

    }
    k = x;

    cout << k<<endl;
//

    return 0;
}
