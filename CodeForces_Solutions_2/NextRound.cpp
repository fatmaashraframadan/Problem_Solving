#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int s , e ,x , counter = 0;
    cin >> s >> e;
    for(int i = 0 ; i < s;i++)
    {
        cin >> x;
        if(x > e)
            counter++;
    }
    cout << counter<<endl;
    return 0;
}
