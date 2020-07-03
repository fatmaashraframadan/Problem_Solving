#include <iostream>

using namespace std;

int main()
{
    int n , h ,sum = 0 ,k;
    cin >> n >> h;
    for(int i = 0 ; i < n ;i++)
    {
        cin >> k;
        if(k > h)
            sum+=2;
        else
            sum+=1;
    }cout << sum;

    return 0;
}
