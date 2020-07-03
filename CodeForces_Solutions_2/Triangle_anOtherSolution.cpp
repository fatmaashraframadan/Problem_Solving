#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int arr[4];
    for(int i = 0 ; i < 4 ; i++)    cin >> arr[i];
    for(int i = 0 ; i < 4 ; i++)    {
        if(arr[0]+arr[1]>arr[2] && arr[0]+arr[2]>arr[1] && arr[2]+arr[1]>arr[0])
        {
            cout<<"TRIANGLE"<<endl;
            return 0;
        }
        int t = arr[i];
        arr[i] = arr[3];
        arr[3] = t;
    }
    for(int i = 0 ; i < 4 ; i++)   {
            sort(arr,arr+3);
             if(arr[0]+arr[1]==arr[2] )
        {
            cout<<"SEGMENT"<<endl;
            return 0;
        }
        int t = arr[i];
        arr[i] = arr[3];
        arr[3] = t;
    }
    cout<<"IMPOSSIBLE"<<endl;

    return 0;
}
