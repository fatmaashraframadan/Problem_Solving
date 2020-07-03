#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, s;
    while(cin >> n >> s)
    {
        vector<int>vec;
        for(int i = 0 ; i < n ; i++)
        {
            int element ;
            cin >> element;
            vec.push_back(element);
        }
        int tail = -1  , sum = 0 ,  mini = 0xfffffff;

        for(int j = 0 ; j < n ; j++)
        {
            while(sum < s && tail+1 < n)//5 11
                sum+=vec[++tail];//1 2 3 4 5    =>  4
            if(mini > tail-j && sum >= s)//mini = 4-0=4
                mini = tail -j;
            sum-=vec[j];//sum = 15 - 1 = 14
        }
        if(mini == 0xfffffff)    cout<<"0"<<endl;
        else    cout << mini+1 << endl;
    }

    return 0;
}
