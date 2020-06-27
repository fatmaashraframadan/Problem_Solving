#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;

    for(int t = 0 ; t < T ; t++)
    {
        int n;
        cin >> n;
        int arr[n];
        bool even = false;
        int index, odd=0; vector<int>oddIndecies;
        for(int i = 0 ; i < n ; i++)
        {
            cin >> arr[i];
            if(arr[i] %2 == 0)
            {
                even=true;
                index = i;
            }
            else
            {
                odd+=1;
             //   cout<<"here : " <<i<<endl;
                oddIndecies.push_back(i);
            }

        }
        if(even)
        {
            cout<<"1"<<endl;
            cout<<++index<<endl;
        }
        else if(odd %2 == 0 || odd > 2)
        {
           // cout<<oddIndecies.size()<<endl;
            cout<<"2"<<endl;
            cout << (1+oddIndecies[0])<<" "<<(1+oddIndecies[1])<<endl;
        }
        else
            cout<<"-1"<<endl;
    }
}
