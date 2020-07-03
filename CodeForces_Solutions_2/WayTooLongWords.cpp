#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string word;
    vector<string>vec;
    cin >> n;
    for(int i = 0 ; i  <n ; i++)
    {
        cin >> word;
        if(word.size() <= 10)
        {
            vec.push_back(word);
        }
        else
        {
            string g ;
            g+= word[0];
            g+=to_string(word.size()-2);
            g += word[word.size()-1] ;

            vec.push_back(g);
        }
    }
    for(int i = 0 ; i < vec.size() ; i++)
    {
        cout << vec[i] << endl;
    }
    return 0;
}
