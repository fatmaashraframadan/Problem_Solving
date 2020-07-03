#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    map<int,bool>mp;
    vector<int>cross;
    vector<int>P1;
    vector<int>P2;
    for(int i = 0 ; i < n; i++)
    {
        int x;
        cin >> x;
        P1.push_back(x);
        mp[x] = true;
    }
    for(int i = 0 ; i < m; i++)
    {
        int x;
        cin >> x;
        P2.push_back(x);
        if(mp[x])
            cross.push_back(x);
    }

    sort(cross.begin(),cross.end());

    if(cross.size()>0)
        cout << cross[0]<<endl;

    else
    {
        sort(P1.begin(),P1.end());
        sort(P2.begin(),P2.end());
        cout << min(P1[0],P2[0]) << max(P1[0],P2[0]) <<endl;
    }

    return 0;
}
