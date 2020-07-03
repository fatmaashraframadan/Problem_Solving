#include <iostream>

using namespace std;

int k = 100000001;
int main()
{
    int n, d, e;
    cin >> n >> d>>e;
    e*=5;
    while(d)
    {
        if(n < 0)
        {
             cout<<k<<endl;
             return 0;
        }
        else
        {
            k = min(k , n%d);
            n-=e;
        }
    }
    return 0;
}
