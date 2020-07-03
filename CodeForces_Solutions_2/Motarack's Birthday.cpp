#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    for(int t = 0 ; t < T ; t++)
    {
        int n ;
        int mini = 1e9, maxi = -1, diff = 0;
        cin >> n;
        int arr[n];
        for(int i = 0 ; i < n ; i++)
        {
            cin >> arr[i];
        }
        for(int i = 0 ; i < n ; i++)
        {
            if(arr[i] != -1 && (arr[i-1]==-1 || arr[i+1] ==-1))
            {
                mini = min(mini,arr[i]);
                maxi = max(maxi,arr[i]);
            }

        }
        int k = (mini + maxi)/2;
        for(int i = 0 ; i < n ; i++)
        {
            if(arr[i]==-1)
                arr[i] = k;
            if(i>0 )
            {
                diff = max( diff,abs(arr[i] - arr[i-1]) );
            }
        }
        cout << diff << " "<<k<<endl;

    }
    return 0;
}
