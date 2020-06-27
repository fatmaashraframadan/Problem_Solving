#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n, res = 0;
    cin >> n;
    n = (n+1) /2*(n%2?-1:1);
    cout <<n<<endl;
    return 0;
}
