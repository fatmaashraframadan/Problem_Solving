#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,diagonal = 0, other = 0;
    bool res = true;
    set<char>s;
    cin >> n;
    char d, o;
    char arr[n][n];

    for(int i = 0 ; i < n; i++)
    {
        for(int j = 0 ; j < n; j++)
        {
            cin >> arr[i][j];
            s.insert(arr[i][j]);
        }
    }

    if(s.size() == 2)
    {
        d = arr[0][0], o = arr[0][1];
        if(d==o)
            cout<<"NO"<<endl;
        else
        {


            for(int i = 0 ; i < n; i++)
            {
                for(int j = 0 ; j < n; j++)
                {
                    if(i==j)
                    {
                        if(arr[i][j] == d )
                        {
                            diagonal++;
                        }
                        if( arr[i][n-j-1] == d)
                        {
                            diagonal++;
                        }
                    }
                    if(j!=n-1-i  && (arr[i][j] == o ))
                        other++;
                }
            }
            long y = 2*n, x = (n*n)-(2*n)+1  ;
            //cout <<y<<"   "<<diagonal<<"    "<<x<<"   "<<other<<endl;
            if(diagonal == y && other == x)
                cout << "YES"<<endl;
            else
                cout <<"NO"<<endl;
        }
    }
    else
    {
        cout << "NO"<<endl;
    }


    return 0;
}
