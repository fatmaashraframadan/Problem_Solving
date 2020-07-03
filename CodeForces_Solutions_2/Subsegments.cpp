#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n , k;
    vector<int>vec;
    deque<int>subsegment;
    cin >> n >> k;
    for(int u = 0 ; u < n ; u++)
    {
        int x;
        cin >> x;
        vec.push_back(x);
    }
//    int bound = (n%k)+1;
//    for(int i = 0 ; i < bound ; i++)
//    {
//
//    }
    int i= 0;
    while(k!=0 && k <= n)
    {
        subsegment.push_back(vec[i]);
        i++;
        k--;
    }
    k+=k;
    for(int i = 0 ; i < subsegment.size() ; i++)
    {
        if(subsegment[i] == )
    }


    return 0;
}
