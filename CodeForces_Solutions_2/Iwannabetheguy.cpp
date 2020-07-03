#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    set<int>s;
    int n,x;
    cin >> n;
    int n1, n2;
    cin >> n1;
    for(int i = 0 ; i < n1 ; i++)
    {
        cin >> x;
        s.insert(x);
    }
    cin >> n2;
    for(int i = 0 ; i < n2 ; i++)
    {
        cin >> x;
        s.insert(x);
    }
    if(s.size() == n)
    {
        cout <<"I become the guy."<<endl;
    }
    else
        cout<<"Oh, my keyboard!"<<endl;
    return 0;
}
