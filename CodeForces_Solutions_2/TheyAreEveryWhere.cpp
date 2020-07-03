#include <iostream>
#include<bits/stdc++.h>

using namespace std;

bool check_Repeatation(vector<char>vec , char c)
{
    sort(vec.begin(),vec.end());
    return binary_search(vec.begin(),vec.end(),c);
}

int main()
{
    int n;
    string s ="", current;
    vector<char>vec;
    cin >> n >> current;
    for(int i = 0 ; i < n ;i++)
    {
        if(!check_Repeatation(vec , current[i]))
        {
            vec.push_back(current[i]);
            if(s != "")
            {
                for(int j = 0 ;j < s.length() ;j++)
                {
                    vec.push_back(s[j]);
                }

                s="";
            }

            else
                continue;

        }
        else
        {
            s+=current[i];
        }
    }
    cout<<vec.size()<<endl;

    return 0;
}
