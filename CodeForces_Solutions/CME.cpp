#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    for(int t = 0 ; t < T ; t++)
    {
        int counter = 0;
        int n ;
        cin >> n;
        if(n%2==0 && n>=4)
        {
            cout<<"0"<<endl;
        }

        else
        {
            while(n < 4)
            {
                ++n;
                ++counter;
            }
            while(n %2!=0)
            {
                ++n;
                //cout << n<<endl;
                ++counter;
            }
            cout<<counter<<endl;
        }

    }
    return 0;
}
