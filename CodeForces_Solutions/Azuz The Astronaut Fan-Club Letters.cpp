#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long fun, q, k;
    vector<long long>vec;
    cin >> q;
    for(int i = 0 ; i < q ; i++)
    {
        long long ans =0;
        cin >> k;
        for(int j = 0 ; j < k ; j++)
        {
            fun = (j*j) + (2*j) + 1;
            if(fun >= k)
            {
                ans = j;
                break;
            }
//            else if(fun < k)
//               break;
        }
        vec.push_back(ans);
    }
    for(int j = 0 ; j < vec.size() ; j++)
    {
        cout <<vec[j]<<endl;
    }
    return 0;
}
