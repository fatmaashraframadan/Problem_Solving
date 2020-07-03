#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n , k;
    cin >> n;
    vector<int>x;

    for(vector<int>::size_type i = 0 ; i < n ;i++)
    {
        cin >>x[i];
    }
    sort(x.begin(),x.end());
    for(unsigned int i = 0 ; i < n ; i++)
    {
        cout <<x[i] << " ";
    }
    return 0;
}
