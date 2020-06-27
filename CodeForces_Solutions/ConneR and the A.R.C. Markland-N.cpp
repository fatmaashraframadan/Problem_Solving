#include <iostream>
#include<bits/stdc++.h>

using namespace std;

///1 - 2 - 3 - 4 - 5
int toEnd(int n,int s, map<int, int>temp)
{
    bool tst = false;
    int x = 0;
    for(int i = s+1 ; i <= n ; i++)
    {
        if(temp[i] != 1)
        {
            //cout <<i;
            tst = true;
            x++;
            break;
        }
        else
        {
            x++;
            continue;
        }
    }
    if(!tst)
    {
        x = 0;
    }
    return x;
}


int toBegin(int n,int s, map<int, int>temp)
{
    ///1-2-3-4-5
    bool tst = false;
    int x = 0;
    for(int i =s-1 ; i >= 1 ; i--)
    {
        if(temp[i] != 1)
        {
            // cout <<i;
            tst = true;
            x++;
            break;
        }
        else
        {
            x++;
            continue;
        }
    }
    if(!tst)
    {
        x = 0;
    }
    return x;
}

int main()
{

    int T;
    cin >> T;
    for(int t = 0 ; t < T ; t++)
    {
        map<int, int>temp ;
///Number of floors - Current - Number of closed.
        int n, s,k;
        cin >> n >> s >> k;
        int arr[k];
        for(int i = 0 ; i < k ; i++)
        {
            cin >> arr[i];
            temp[arr[i]] = 1;
        }
        if(temp[s] ==1)
        {
            int x1 = toEnd(n,s, temp), x2 = toBegin(n, s, temp);
            if(x1 == 0)
            {
                cout <<x2 <<endl;
            }
            else if(x2 == 0)
            {
                cout <<x1 <<endl;
            }
            else
            {
                int res = min(x1, x2);

                cout << res <<endl;
            }

        }
        else
            cout<<"0"<<endl;

    }
    return 0;
}
