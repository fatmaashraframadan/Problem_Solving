#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    for(int t = 0 ; t < T ; t++)
    {
        int n;
        cin>>n;
        int a[n], b[n];
        //   set<int>s;
        for(int i = 0 ; i < n ; i++)
        {
            cin >> a[i];
        }
        for(int i = 0 ; i < n ; i++)
        {
            cin >> b[i];
        }


        sort(a,a+n);
        sort(b,b+n);
        for(int i = 0 ; i < n ; i++)
        {
            cout << a[i] << " ";
        }
        cout<<endl;
        for(int i = 0 ; i < n ; i++)
        {
            cout << b[i] << " ";
        }
        cout<<endl;


    }
    return 0;
}
