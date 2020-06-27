#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<char>vec;
    bool color = false;
    int n , m;
    char x;
    cin >>n >> m;
    for(int i = 0 ; i < n*m ; i++)
    {
        cin >> x;
        vec.push_back(x);
    }

    for(int i = 0 ; i < vec.size() ; i++)
    {
        ///'C', 'M', 'Y'.
        if(vec[i] == 'W' || vec[i] == 'B' || vec[i] == 'G')
            continue;
        else
            color=true;
    }
    if(color)
    {
        cout << "#Color" <<endl;
    }
    else
    {
        cout <<"#Black&White"<<endl;
    }
    return 0;
}
