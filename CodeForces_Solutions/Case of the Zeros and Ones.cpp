#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int one = 0 ,two=0, n ;
    char x;

    cin >>n;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> x;
        int y = x - '0';
        if(y)
            one++;
        else
            two++;
    }

    cout << abs(one-two) <<endl;

    return 0;
}
