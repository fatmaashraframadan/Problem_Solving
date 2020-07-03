#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T, Profit = 0;
    cin >> T;
    for(int t = 0 ; t < T ; t++)
    {
        Profit = 0;
        int b, p, f, h, c;
        cin >> b >> p >> f >> h >> c;
    int tmp = (p * 2) + (f * 2);
        if(b < 2)
        {
            Profit = 0;
        }

        //First Case.

         if(b >= tmp)
        {
            Profit += (p * h) + (f * c);
//
//            cout << (p * h)<<"   " << (f * c)<<endl;
//            cout <<"Here : " << Profit<<endl;
        }

        ///____________________________________________________________

        else
        {
            //Second Case.
            int MAX = max(h, c);
            if(MAX == c)
            {
                int x = f*2;
                while(b < x)
                {
                    x = (--f) * 2;
                }
                b-=x;
                Profit += f * c;

                if(b >= 2)
                {
                    int x = p*2;
                    while(b < x)
                    {
                        x = (--p) * 2;
                    }
                    Profit += p * h;
                }
            }
            else
            {
                int x = p*2;
                while(b < x)
                {
                    x = (--p) * 2;
                }
                b-=x;
                Profit += p * h;

                if(b >= 2)
                {
                    int x = f*2;
                    while(b < x)
                    {
                        x = (--f) * 2;
                    }
                    Profit += f * c;
                }
            }
        }
        cout << Profit << endl;
    }


    return 0;
}
