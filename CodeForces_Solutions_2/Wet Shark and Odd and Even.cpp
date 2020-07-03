#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long result = 0;
    vector<long long>vec;
    long long T;
    cin>>T;
    for(long long t = 0 ; t < T ; t++)
    {
        long long x;
        cin>>x;
        //cout<<"Here : " <<x<<endl;
        if(x%2==0)
            result+=x;
        else
        {
           // cout<<"here"<<endl;
            vec.push_back(x);
        }
    }
    if(vec.size()%2==0)
    {
        for(long long i = 0; i < vec.size(); i++)
        {
            result+=vec[i];
        }
    }
    else
    {
        sort(vec.begin(),vec.end());
        long long s = vec.size();
        //cout<<s<<endl;
        for(long long i = 1; i < vec.size(); i++)
        {
           // cout<<vec[i]<<endl;
            result+=vec[i];
        }
    }
    cout<<result<<endl;
    return 0;
}
