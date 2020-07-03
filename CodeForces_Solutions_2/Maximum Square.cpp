#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int getMin(int i, int j, vector<int>vec)
{
    sort(vec.begin(),vec.end());
    int MIN = 1000;
    for(int h = i ; h < j ; h++)
    {
        if(vec[h] < MIN)
        {
            MIN = vec[h];
        }
    }
    return MIN;
}

int main()
{

    int T ;
    cin >> T;
    for(int x = 0 ; x < T ; x++)
    {
         vector<int>vec;
        int N ;
        cin >> N;
        int i = 0, j =N;
        for(int u = 0 ; u < N ; u++)
        {
            int y ;
            cin >>y;
            vec.push_back(y);
        }
       // cout << MIN
        int SIZE = N, MIN = getMin(i,j , vec);
        if(SIZE == MIN)
        {
            cout << SIZE<<endl;
        }
        else if(SIZE < MIN)
        {
            cout<<SIZE<<endl;
        }
        else
        {
            while(SIZE > MIN)
            {
               // cout << MIN << "   "<< SIZE<<endl;
                i++;
                MIN = getMin(i,j,vec);
                SIZE--;
                //cout << "i"<<"    "<<i<<endl;
            }

            if(SIZE == MIN)
            {
                cout << SIZE<<endl;
            }

            else if(SIZE < MIN)
            {
                cout<<SIZE<<endl;
            }
        }
    }


    return 0;
}
