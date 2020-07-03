#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s , res = "";
    cin >> s;
    char vowels[6] = {'a' , 'o' , 'y' , 'e' , 'u' ,'i'};
    for(int i = 0 ; i < s.size() ; i++)
    {
        s[i] = tolower(s[i]);
        if(s[i] =='a' || s[i] == 'o' || s[i] == 'y' || s[i] == 'e' || s[i] == 'u' || s[i] == 'i')
        {
            continue;
        }
        else
        {
            res+='.';
            res+=s[i];
        }
    }
    cout << res <<endl;
    return 0;
}
