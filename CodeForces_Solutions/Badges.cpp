#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int g, b, n;
    cin >> b >> g >> n;
    cout << min(b,n)+min(g,n)-n+1<<endl;
    return 0;
}
