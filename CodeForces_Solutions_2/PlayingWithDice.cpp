#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a , b , count1 = 0 , draw = 0 , count2 = 0;
    cin >> a >> b;
    for(int i = 1 ; i < 7 ; i++)
    {
        if(abs(a-i) < abs(b-i))
            count1++;
        else if(abs(a-i) > abs(b-i))
            count2++;
       else
            draw++;
    }
    cout << count1 <<" " << draw << " " <<count2  <<endl;
    return 0;
}
