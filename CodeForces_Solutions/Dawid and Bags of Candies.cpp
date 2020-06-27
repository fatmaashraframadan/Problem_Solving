#include <iostream>

using namespace std;

int main()
{
    int a , b , c, d;
    cin >> a>> b >> c >> d;
    if(((a+b) == (c+d)) || ((b+c) == (a+d)) ||( (b+d)==(a+c))|| ((a+b+c)== (d)) || ((a+b+d)== (c)) || ((d+b+c)== (a)) || ((a+d+c)== (b)))
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
    return 0;
}
