#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<string>vec;
    string s;
    int n;
    bool found = false;
    cin >> n;
    for(int i = 0  ; i < n ; i++)
    {
        cin >> s;
        if(s[0] == 'O' && s[1] == 'O'&&!found )
        {
            found = true;
            s[0]='+';
            s[1]='+';
            vec.push_back(s);
        }
        else if((s[3] == 'O' && s[4] == 'O') && !found)
        {
             found = true;
            s[3]='+';
            s[4]='+';
            vec.push_back(s);
        }
        else
            vec.push_back(s);

    }
  //  cout <<"\n"<< "---------------------------------------------------"<<endl;
     if(found)
        cout << "YES"<<endl;
     else
     {
          cout <<"NO"<<endl;
          return 0;
     }

    for(int i = 0 ; i < vec.size();i++)
    {
        cout <<vec[i]<<endl;
    }
    return 0;
}
