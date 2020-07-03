#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n , c , total = 0;
    vector<int>vec;
    cin >> n;
    for(int i = 0 ; i < n ;i++)
    {
        cin >> c;
        vec.push_back(c);
    }
    if(vec[0] == -1)
            total++;
    for(int i = n ; i > 0  ; i--)
    {

        if(vec[i] == -1 && vec[i-1] != 1  )
        {
            total++;

        }

        else
            continue;
    }
    for(int i = 0 ; i < n  ; i++)
    {
        if(vec[i] > 1)
            {
                //vec[i] = vec[i] -1 ;
                total = total - vec[i];
            }

    }
    cout << total;
    return 0;
}
