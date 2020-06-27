#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n ;
     string s;
    cin >> n >> s;
    int right = 0 , mini = 0;

    for(int i = 0 ; i < s.size() ; i++)
    {
        if(s[i] == ')')
            right--;
        if(s[i] == '(')
            right++;
        mini = min(mini , right);
    }
    if(mini < -1 || right!=0)
    {
        cout << "No"<<endl;
    }
    else
        cout<<"Yes"<<endl;



    return 0;
}
