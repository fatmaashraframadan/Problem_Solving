    #include <iostream>
    #include<bits/stdc++.h>

    using namespace std;

    int main()
    {
        int n ,x , counter= 0;
        vector<int>s;
        cin >> n;
        for(int i = 0 ; i < n ;i++)
        {
            cin >>x;
            s.push_back(x);
        }
        sort(s.begin() , s.end());
        for(int i = 0 ; i < n ; i++)
        {
            if(s[i] > s[0] && s[i] < s[n-1])
                counter++;
        }
        cout <<counter<<endl;

        return 0;
    }
