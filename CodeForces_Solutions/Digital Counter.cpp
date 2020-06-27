#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int arr[10] = {2,7,2,3,3,4,2,5,1,2} , n;
    cin >> n;
    cout << arr[n/10]*arr[n%10]<<endl;
    return 0;
}
