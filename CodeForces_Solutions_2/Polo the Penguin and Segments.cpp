#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int counter = 0, n, k , l , r;
    vector<int>vec;
    cin >> n>> k;

    for(int i = 0 ; i < n ; i++)
    {
        cin >> l >> r;
        counter+=r-l+1;
    }
    cout << (k - counter%k)%k<<endl;



    return 0;
}
