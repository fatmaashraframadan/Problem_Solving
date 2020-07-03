#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n2 , x ,arr[101] , counter = 0 , boy_1 = 0, total = 0;
    cin >> n2;
    for(int i = 0 ; i < n2 ; i++)
    {
        cin >>arr[i];
        total+=arr[i];
    }
    sort(arr , arr+n2 ,greater<int>());
    for(int i = 0 ; i < n2 ; i++)
    {
       boy_1 +=arr[i];
       total -=arr[i];
       counter++;
       if(boy_1 > total)
       {
           break;
       }
    }
    cout << counter<<endl;
    return 0;
}
