#include <iostream>
#include<bits/stdc++.h>

using namespace std;
long long arrn[5],arrm[5];
int main()
{

    int n, m ;
    cin >> n >> m;

    for(int i = 1 ; i <= n; i++)
    {
        arrn[i%5]++;
    }
    for(int j = 1; j <= m ; j++)
    {
        arrm[j%5]++;
    }
  //  cout <<arrn[0] << "        "<<arrm[0]<<endl;
    long long ans = arrn[0]*arrm[0] + arrn[1]*arrm[4] + arrn[2]*arrm[3] +arrm[1]*arrn[4] + arrm[2]*arrn[3] ;

    cout << ans <<endl;

    return 0;
}

/*
    long long n , m ,ans = 0;
    cin >>n >>m;
    for(int i = 1 ; i <= n;i++)
    {
        for(int j = 1; j <= m ; j++)
        {
            if((i+j)%5==0)
               ans++;
        }
    }
    cout <<ans<<endl;
    */
