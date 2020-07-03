#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    for(int t = 0 ; t < T; t++)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i = 1 ; i <= n ; i ++)
        {
            arr[i] = pow(2,i);
        }
        int A=arr[n-1],B=arr[n]; ///2 4 8 16 32 64 => 64
        int A_Len =n/2;int B_Len=n/2, i_A =1, i_B=1,i=1;
        while(i_B < B_Len&&i<n)
        {
            B+=arr[i];
            i_B++; i++;
        }
        while(i_A < A_Len && i< n-1)
        {

            A+=arr[i];i_A++;i++;
        }
        cout<< B-A<<endl;
    }
    return 0;
}
