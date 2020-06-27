#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    for(int t = 0 ; t < T ; t++)
    {
        int n ;
        cin >> n;
        string s;
        cin >> s;
        string answer;
        for(int i = 0 ; i < n ; i++)
        {
            if(s[i] % 2 != 0)
            {
                answer+=s[i];
            }
        }
        if(answer.size() % 2 != 0)
        {
            answer.pop_back();
        }

        if(answer.size())
            cout << answer << endl;
        else
            cout << "-1"<<endl;

    }
    return 0;
}
