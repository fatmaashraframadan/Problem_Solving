#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,k;
    int n,m;

    string s;
    map<string,string> tmp;

    tmp["purple"]="Power";
    tmp["green"]="Time";
    tmp["blue"]="Space";
    tmp["orange"]="Soul";
    tmp["red"]="Reality";
    tmp["yellow"]="Mind";

    cin >> n;
    m = 6 - n;


    for(int i = 0 ; i < n ; i++)
    {
        cin >> s;
        tmp[s] = "Exist";
    }
 cout << m <<endl;
    auto itr=tmp.begin();
    while(itr!=tmp.end())
    {
        if(itr->second!="Exist")
            cout<<itr->second<<endl;

        itr++;
    }


    return 0;
}
