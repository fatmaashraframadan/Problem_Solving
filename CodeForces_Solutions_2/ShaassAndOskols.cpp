#include <iostream>
#include<bits/stdc++.h>

using namespace std;
const int MAX = 100;
int main()
{
    int n , nom_of_shots;
    int arr[MAX];
    cin >>n;
    for(int i = 0 ; i < n ; ++i)
    {
        cin >> arr[i];
    }
    cin >> nom_of_shots;
    for(int i = 0 ; i < nom_of_shots ; ++i)
    {
       int x , y;
       cin >> x >> y;
       --x;
       if(x !=0)
       {
           arr[x-1]+=y-1;
       }
       if(x!=n -1)
       {
           arr[x+1]+=arr[x]-y;
       }
       arr[x]=0;
    }
    for(int i = 0 ; i < n ; ++i)
    {
        cout << arr[i]<<endl;
    }
    return 0;
}
