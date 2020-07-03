#include <iostream>
#include<bits/stdc++.h>

using namespace std;
vector<int>vec;
int RemoverZeros( int n)
{
    int x = 0;
    for(int i = 0 ; i < n ; i++)
    {
        if(vec[i] == 0)
        {
            vec[i] += 1;
            x++;
        }
        else
            continue;
    }
    return x;
}

int checkSum( int n)
{
    int counter = 0;
    for(int i = 0 ; i < n ; i++)
    {
        //cout <<vec[i]<<endl;
        counter+=vec[i];
       // cout<<"After Summation : " << counter<<endl;
    }
   // cout<<"From Function :  "<<counter<<endl;
    return counter;
}

bool checkProduct( int n)
{
    int couner = 1;
    for(int i = 0 ; i < n ; i++)
    {
        couner*=vec[i];
    }
    if(couner !=0)
        return true;
    else
        return false;
}

int main()
{
    int T;
    cin>>T;
    for(int t = 0 ; t < T ; t++)
    {
        vec.clear();
        int n;
        cin >> n;

        for(int i = 0 ; i < n ; i++)
        {
            int p ;
            cin >> p;
            vec.push_back(p);
        }
        int x = 0;
        x+=RemoverZeros(n);
      // cout << x<<endl;
        int sum = checkSum(n);
      //  cout<<"yyy : " <<sum<<endl;
        while( sum==0)
        {
          //  cout << "sum : " <<sum<<endl;
            sum +=1;
            x++;
        }
        cout<<x<<endl;

    }
    return 0;
}
