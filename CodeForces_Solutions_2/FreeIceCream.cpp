#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n , x , d , Capacity = 0,dissatisfied = 0;
     char s;
    cin >> n >> x;
    Capacity+=x;
    cout << Capacity<<endl;
    for( int i = 0 ; i < n ; i++)
    {
        cin >> s >> d;
        if(s=='-')
        {
            if(d <= Capacity)
            {
                Capacity-=d;
                cout << Capacity<<endl;
            }
            else
                dissatisfied+=1;
        }
        else
        {
            Capacity+=d;
        }
    }
    cout << Capacity << " " << dissatisfied<<endl;
    return 0;
}
