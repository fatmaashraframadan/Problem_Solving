#include <iostream>

using namespace std;

int main()
{
    long long n;cin>>n;
    long long temp = 2;
    while(temp < n)
    {
        if(!(n%temp))
        {
            cout<<temp<<(n/temp);
            break;
        }
        temp++;
    }
    return 0;
}
