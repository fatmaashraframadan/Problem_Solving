#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    for(int t = 0 ; t < T ; t++)
    {
        int n;
        cin >> n;
        int arr[n];
        long long sum = 0;
        for(int i = 0 ; i < n ; i++)
        {
            cin >> arr[i];
            sum+=arr[i];
        }
cout<<(sum+n-1)/n<<endl;
    }
    return 0;
}
