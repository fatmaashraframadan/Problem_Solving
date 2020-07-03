#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, c, total = 0, sum = 0;
    vector<int>vec;
    cin >> n;
    for(int k = 0 ; k < n ; k++)
    {
        cin >> c;
        vec.push_back(c);
    }
    for(int i = 0  ; i < n ; i++)
    {
        if(sum == 0 && vec[i] == -1)
        {
            total++;
        }
        else
            sum=sum+vec[i];
    }
    cout << total;
    return 0;
}
