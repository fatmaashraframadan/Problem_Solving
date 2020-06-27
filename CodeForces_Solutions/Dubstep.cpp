#include <iostream>
#include<bits/stdc++.h>

using namespace std;


int main()
{
    string s, t="";
    cin >> s;
    bool found = true;
    for(int i = 0 ; i <s.size() ;i++ )
    {
        if(s.substr(i,3)=="WUB" && found)
        {
            i+=2;continue;
        }
        else if(s.substr(i,3)=="WUB" && !found)
        {
            if(s.substr(i,6)=="WUBWUB" )
                i+=5;
            else
                i+=2;
            t+=" ";continue;
        }
        else
          {
                t+=s[i];
                found=false;
          }
    }

cout <<t<<endl;
    return 0;
}

