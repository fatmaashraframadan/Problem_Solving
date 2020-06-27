#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long q, n, m;
    vector<int>vec;
    cin >> q;
    for(int i = 1 ; i <= q ; i++)
    {
         long long ans = 0;
        cin >>n >> m;
        for(int i = 1 ; i < n; i++)
        {

            if(i%m==0)
            {
                string s = to_string(i);
                char r = s[s.length() -1];
                ans+=r-'0';
            }
        }
        cout <<ans<<endl;
        vec.push_back(ans);
    }

    for(int h = 0 ; h < q ; h++)
    {
        cout <<vec[h]<<endl;
    }
    return 0;
}
