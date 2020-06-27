#include <iostream>

using namespace std;

int main()
{
    int n , sum1=0 , sum2=0;
    string s;
    cin>>n >> s;
    for(int i = 0 ;i < s.length() ;i ++)
    {
        if(s[i]=='A')
            sum1++;
        if(s[i]=='D')
            sum2++;
    }
    if(sum1 > sum2)
    {
        cout << "Anton";
    }

    else if(sum2 > sum1)
    {
         cout <<"Danik";
    }

    else
    {
        cout <<"Friendship";
    }

    return 0;
}
