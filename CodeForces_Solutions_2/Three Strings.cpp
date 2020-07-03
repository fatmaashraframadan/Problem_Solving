#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T;cin >> T;
    for(int t = 0 ; t < T ;t++)
    {
         string a , b, c;cin >> a >> b >> c;
         bool test = false;
         for(int i = 0; i < a.size() ; i++)
         {
             if(c[i] != a[i] && c[i] != b[i])
             {
                 test = true;
                 break;
             }
         }
         if(test)
         {
             cout << "NO"<<endl;
         }
         else{
            cout << "YES"<<endl;
         }

    }
    return 0;
}
