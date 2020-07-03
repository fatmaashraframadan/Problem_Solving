#include <iostream>
#include<bits/stdc++.h>


using namespace std;

int main()
{
    int T;
    cin >> T;
    for(int t = 0 ; t < T ; t++)   //ok   ok     no
    {
        long long r, g, b;  //1 10 2
        //ok    ok  no
        cin >> r >> g >> b;//1000000000 500000000 499999999
        if(r <= g <=b)
        {
            if(((r+g) >= b-1) && ((b+g) >= r-1) && ((r+b) >=g-1))
            {
                cout << "YES"<<endl;
            }
             else
            cout << "NO"<<endl;
        }

        else
            cout << "NO"<<endl;
    }

    return 0;
}
