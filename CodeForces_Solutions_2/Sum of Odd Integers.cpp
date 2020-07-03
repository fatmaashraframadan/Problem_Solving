#include <iostream>

using namespace std;

int main()
{
    int T;cin>>T;
    for(int t =0 ; t < T; t++)
    {
        long long n ,k;cin>>n>>k;
        if((n%2 ==k%2) && ((k*k)<=n))
        {
            cout<<"YES"<<endl;
        }
        else{cout<<"NO"<<endl;}
    }
    return 0;
}
