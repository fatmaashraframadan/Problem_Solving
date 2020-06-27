#include <iostream>
#include<bits/stdc++.h>

using namespace std;
int n, k;

bool valid(int mid)
{
    long long lines = 0;
    int val = mid;
    while (val)
    {
        lines += val;
        if (lines >= n)
            return true;
        val /= k;
    }
    return false;
}
int main()
{
    cin >> n >> k;
    int st = 1, en = 1e9;

    while(st < en)
    {
        int mid = st + (en-st)/2;
        if(!valid(mid))
            st = mid + 1;
        else
            en = mid;
    }
    cout << st << endl;

    return 0;
}
