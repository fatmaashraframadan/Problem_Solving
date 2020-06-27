#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n , m;
    set<int>test;
    cin >> n >> m;
    for(int i = 0 ; i < n ; i++)
    {
        int x;
        cin >> x;
        for(int j = 0 ; j < x ; j++)
        {
            int y;
            cin >> y;
            test.insert(y);
        }
    }
    if(test.size() == m)
        cout << "YES"<< endl;
    else
        cout << "NO"<<endl;
    return 0;
}
