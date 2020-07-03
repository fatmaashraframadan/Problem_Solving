#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int arr[4][5001], n,nom, x , Count[4]={0};
    cin >> n;
    for(int i =1 ; i <= n ; i++)
    {
        cin >> x;
        Count[x]++;
        arr[x][Count[x]] = i;
    }
    nom=min(min(Count[1] , Count[2]),Count[3]);
    cout << nom<<endl;
    for(int i = 1 ; i <= nom ; i++)
    {
        cout<<arr[1][i] << " " << arr[2][i] <<" " << arr[3][i]<<endl;
    }

    return 0;
}
/*
    vector<int>vec1;
    vector<int>vec2;
    vector<int>vec3;
    int n, x;
    cin >> n;
    for(int i = 1 ; i <= n ; i++)
    {
        cin >>x;
        if(x==1)
            vec1.push_back(i);
        if(x==2)
            vec2.push_back(i);
        if(x==3)
            vec3.push_back(i);
    }
//    reverse(vec1.begin() , vec1.end());
//    reverse(vec2.begin() , vec2.end());
//    reverse(vec3.begin() , vec3.end());

    int MIN ;
    MIN= min({vec1.size(), vec2.size(), vec3.size()});
    if(MIN == 0)
    {
        cout<<"0";
        return 0;
    }
    else
    {
        cout << MIN <<endl;
        for(int i = 0 ; i < MIN ; i++)
        {
            cout << vec1[i] << " " << vec2[i] << " " << vec3[i] << endl;
        }
    }
    //cout <<"MIN"<<MIN<<endl;
*/
