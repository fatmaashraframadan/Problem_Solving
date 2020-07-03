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
        string s;
        cin >> n >> s;
        int l = -1, r = n;
        map<pair<int,int>,int>vis;
        pair<int,int>cur = {0,0};
        vis[cur] = 0;
        for(int i = 0 ; i < n ; i++)
        {

          //  cout<<"s[i] :  " << s[i] << endl;

            if(s[i] == 'L')
                --cur.first;
            else if(s[i] == 'R')
                ++cur.first;
            else if(s[i] == 'U')
                ++cur.second;
            else if(s[i] == 'D')
                --cur.second;
           // cout << cur.first << "     "<<cur.second <<endl;
         //   cout<<vis.count(cur) <<endl;
            if(vis.count(cur))
            {
                if(i-vis[cur]+1 < r-l+1)
                {
                    r = i;
                    l = vis[cur];

                }
            }
            vis[cur] = i+1;
          //  cout<<"vis[cur]    :    " <<vis[cur]<<endl;
        }
        if(l == -1)
            cout<<"-1"<<endl;
        else
            cout << l+1 <<" " << r+1<<endl;
    for(auto&t : vis)
    {

        cout<<t.first.first<<"\t";
        cout<<t.first.second<<"\t";
        cout<<t.second<<"\t";
    }
    }
    return 0;
}
