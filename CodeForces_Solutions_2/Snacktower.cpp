#include <iostream>
#include<bits/stdc++.h>

using namespace std;
//int n = 100001;
  int current = 0;
vector<bool>vec(1000001);
void fun(int x, int cur)
{
    if(x==cur)
    {
        for(int i = cur ; i > 0 ; i--)
        {
            if(vec[i])
            {
                cout <<i << " ";
                vec[i] = 0;
                current = i-1;
            }
            else
            {
                break;
            }

        }
    }


}
int main()
{
    int n, x;
    cin >> n;

     current = n;
    for(int i = 0 ; i < n ; i++)
    {
        cin >>x ;
        vec[x] = 1;
        fun(x, current);
        cout << endl;
    }
    return 0;
}
