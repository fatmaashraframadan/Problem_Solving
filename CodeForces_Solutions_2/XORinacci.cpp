#include <iostream>
#include<bits/stdc++.h>

using namespace std;
void decimaltobinart(int a, int b, int n)
{
    int arr[32];
    int arr2[32];
    int tmp = n;
    int i = 0;
    int i2 = 0;
    if((n==2 && a==0 &&b==1)||(n==2&&a==1&&b==0))
    {
        cout<<"1"<<endl;
    }
    else{

    while(n!=0)
    {
        arr[i] = n%2;
        n=n/2;
        i++;
    }

    reverse(arr,arr+i);

    while(tmp!=0)
    {
        arr2[i2] = tmp%2;
        tmp=tmp/2;
        i2++;
    }

    reverse(arr2,arr2 + i2);

    int res[64];
    int k = max(i,i2);
    int len = 0;

    for(int h = 0 ; h < k; h++)
    {
        if((arr[h] == 0 && arr2[h] == 0) || (arr[h] == 1 && arr2[h] ==1))
        {
            res[h] = 1;
        }
        else if((arr[h] == 0 && arr2[h] == 1) || (arr[h] == 1 && arr2[h] ==0))
        {
            res[h]=0;
        }
        len++;
    }

    string f ="";

    for(int d = 0 ; d < len; d++)
    {
        f+=arr[d];
    }

    stringstream o(f);

    int n2 = 0;
    o >> n2;

    int num = n2;
    int dec_value = 0;

    int base = 1;

    int temp = num;

    while (temp)
    {
        int last_digit = temp % 10;
        temp = temp / 10;

        dec_value += last_digit * base;

        base = base * 2;
    }

    cout<< dec_value<<endl;
    }

}
int main()
{
    int q ;
    cin >>q;
    for(int i = 0 ; i < q ; i++)
    {
        int a, b, n;
        cin >> a >>b >>n;
        if(n==0)
            cout << a<<endl;
        else  if(n==1)
            cout << b <<endl;
        else
        {
            decimaltobinart(a,b,n);
        }
    }
    return 0;
}
