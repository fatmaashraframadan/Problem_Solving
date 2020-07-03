    #include <iostream>
    #include<bits/stdc++.h>

    using namespace std;

    int main()
    {
        int n;
        cin >> n;
        if(n%2==1)
        {
            cout << -1 ;
            return 0;
        }
        for(int i = 0 ; i < n ; i+=2)
        {
            cout << i+2 << " " << i+1<<" ";
        }
        return 0;
    }
