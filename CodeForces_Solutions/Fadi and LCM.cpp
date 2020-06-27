#include <iostream>
#include<bits/stdc++.h>

using namespace std ;


int main() {
    long long x , i;
    cin >>x;
    for ( i = sqrt(x); i >=1 ; i--) {
        if((x%i) == 0 && __gcd(i ,x/i) == 1)
        {
            cout << i <<"   "<< x/i << endl;
            break;
        }

    }
    return 0;
}
