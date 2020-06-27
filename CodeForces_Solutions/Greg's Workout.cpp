#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n ;
    cin >> n;
    int arr[n];
    int chest = 0, biceps = 0, Back = 0;
    for(int i = 0 ; i < n ; i++)
    {
        cin>>arr[i];
    }
    for(int i = 0 ; i < n ; )
    {
        chest+=arr[i];
        i++;
        if(i < n)
        {
            biceps+=arr[i];
            i++;
        }
        if(i < n)
        {
            Back+=arr[i];
            i++;
        }
    }
    int x = max(chest,Back);
    int y = max(biceps,x);
    if(y == chest)
    {
        cout<<"chest"<<endl;
    }
    else if(y == biceps)
    {
        cout << "biceps"<<endl;
    }
    else{
        cout<<"back"<<endl;
    }

    return 0;
}
