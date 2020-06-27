#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
   int arr[6];
   for(int i = 0 ; i < 6 ;i++)
   {
       cin >> arr[i];
   }
   sort(arr , arr+6);
   do{
        if(arr[0] + arr[1] +arr[2] == arr[3] + arr[4] +arr[5])
        {
            cout << "YES"<<endl;
            return 0;
        }
   }while(next_permutation(arr , arr+6));
   cout << "NO"<<endl;
    return 0;
}
