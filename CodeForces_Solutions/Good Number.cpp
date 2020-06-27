#include <iostream>
#include<bits/stdc++.h>


using namespace std;

int main()
{
    int n, k, counter2=0;
    set<int>s;
    cin >> n>>k;
   while(n--)
    {
        int num;
        cin >> num;
        s.clear();
        while(num != 0)
        {
            if(num%10 <= k)
                s.insert(num%10);
            num/=10;
        }
        if(s.size() == k+1)
        {
            counter2++;
        }
    }
    cout << counter2<<endl;
    return 0;
}
