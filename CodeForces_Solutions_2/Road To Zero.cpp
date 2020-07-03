#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin>>T;
    for(int t = 0 ; t < T ; t++)
    {
        long long x, y, a, b;
        cin >> x>> y>> a>>b;
        long long sub = abs(x-y);

        long long k =(sub * a + min(x,y)*b);

        long long h = ((x+y) * a );
        cout << min(k,h)<<endl;

    }
    return 0;
}

