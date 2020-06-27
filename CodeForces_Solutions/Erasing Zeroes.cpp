#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T;cin >> T;
    for(int t = 0 ; t < T ;t++)
    {
        string s;cin>>s;
        int counter = 0;bool flag = false;
        int n = s.size();

        int i = s.size()-1;
       // cout << "i   " <<i<<"   " << s[i]<<endl;
        while(s[i] == '0' && i>=0)
        {
           // cout << "s[i]  " <<s[i]<<endl;
            i--;n--;
        }
        //cout << n<<endl;

       for(int i = 0; i < n ;i++)
       {
           if(s[i] == '1')
           {
               flag = true;
           }
           if(s[i] == '0' && flag)
           {
               counter++;
           }
       }
       cout<<counter<<endl;
    }
    return 0;
}
