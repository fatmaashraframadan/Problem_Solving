#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, x;
    set<int>s;
    vector<int>vec;
    cin >>n;

    for(int i = 0 ; i <n ; i++)
    {
        cin >> x;
        s.insert(x);
    }

    if(s.size()==1)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    for(int m : s)
    {
        vec.push_back(m);
    }
    cout << vec[1]<<endl;
    return 0;
}
