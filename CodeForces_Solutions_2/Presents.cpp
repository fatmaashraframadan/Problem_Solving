#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, x;
    vector<int>vec;
    cin >> n;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> x;
        vec.push_back(x);
    }
    int i = 1;
   do
    {

        for(int j = 0 ; j <= vec.size() ;j++)
        {
            if(vec[j] == i)
                cout <<j+1<<" ";
        }
        i++;
    } while(i!=n+1);



    return 0;
}
