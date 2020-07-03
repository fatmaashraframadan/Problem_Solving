#include <iostream>
#include<bits/stdc++.h>

using namespace std;

bool isInside(const std::string & str, char c)
{
    return str.find(c) != std::string::npos;
}

bool YES(vector<int>vec)
{
    for(int i = 0 ; i < vec.size()-1 ; i++)
    {
        if(vec[i] > vec[i+1])
        {
            return false;
        }
    }
    return true;
}

int Count(vector<int>vec , string s)
{
    int counter = 1;
    for(int i = 0 ; i < vec.size()-1 ; i++)
    {
        if(vec[i] > vec[i+1])
        {
            counter++;
        }
            else if(vec[i] == vec[i+1])
        {
            if(s[vec[i]] == s[vec[i+1]])
            {
                counter++;
            }
        }
    }
    //cout<<counter;
    return counter;
}

void SecondCase(string s, string t2)
{
    vector<int>vec;
    for(int i = 0 ; i < t2.size() ; i++)
    {
        if(isInside(s,t2[i]))
        {
            char c = t2[i];
            std::size_t found = s.find(c);
            vec.push_back(found);
        }
    }
    if(YES(vec))
    {
        cout <<"1"<<endl;
    }
    else
    {
////        cout<<"COME"<<endl;
        cout << Count(vec , s)<<endl;
    }

}


int main()
{
    int T;
    cin >> T ;
    for(int t = 0 ; t < T ; t++)
    {
        string s, t2;
        cin >> s >> t2;
        //first case
        bool is = false;

        for(int i = 0 ; i < t2.size() ; i++)
        {
            if(!isInside(s,t2[i]))
            {
                is = true;
                cout <<"-1" << endl;
                break;
            }
        }
        if(!is)
        {
            SecondCase(s,t2);
        }


    }
    return 0;
}
