#include <iostream>
#include<bits/stdc++.h>

using namespace std;

bool Done(string x , int nom)
{
    for(int j = 0 ; j < nom ; j++)
        {
            if(x[j] == 'A' && x[j+1]=='P')
                return false;
        }
        return true;
}

int main()
{
    int T;
    cin >> T;
    for(int t = 0 ; t < T ; t++)
    {
        int nom;
        cin >> nom;
        string s;
        cin >> s;
        //cout << Done(s,nom)<<endl;
        int time = 0;
        while(!Done(s , nom))
        {
           // cout << "here";
           for(int j = 0 ; j < nom ; j++)
            {
                if(s[j] == 'A' && s[j+1] == 'P')
                {
                //    cout <<"here  :   "<< s<<endl;
                    s[j+1] = 'A';
                    j++;
                    //cout <<j<<endl;
                }
                else
                    continue;
            }
            //cout << time<<endl;
            time++;
        }
      cout <<time<<endl;

    }
    return 0;
}
