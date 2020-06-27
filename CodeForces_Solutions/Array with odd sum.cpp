#include <iostream>
#include<bits/stdc++.h>

using namespace std;
bool isEven(int arr[], int n)
{
    for(int t = 0 ; t < n ; t++)
    {
        if(arr[t] %2 != 0)
            return false;
        else
            continue;
    }
    return true;
}
array<int,2> counter(int arr[], int n)
{
    array<int,2>arr2 = {0,0};
    for(int t = 0 ; t < n ; t++)
    {
        if(arr[t]==0)
            continue;
        if(arr[t] %2 != 0)
            arr2[0]++;
        else
            arr2[1]++;
    }
    return arr2;
}
int main()
{
    int T;
    cin >> T;
    for(int t = 0 ; t < T ; t++)
    {
        int n ;
        cin >> n;
        int arr[n];
        for(int i = 0 ; i < n ; i++)
        {
            cin >> arr[i];
        }
            array<int,2>odd_even;
            odd_even = counter(arr, n);
            int odd = odd_even[0];
            int even = odd_even[1];
        if(n%2 == 0)
        {

            if( odd== 0 || even ==0 || ((even-odd)%2!=0) || ((odd-even)%2!=0) )
            {
                cout<<"NO"<<endl;
            }
            else
            {
                cout << "YES"<<endl;
            }
        }
        else
        {
            if( (odd ==0) )
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;

        }

    }
    return 0;
}
