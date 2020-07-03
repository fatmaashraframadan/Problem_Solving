#include <iostream>
#include<bits/stdc++.h>

using namespace std;
set<vector<int>>s;
int i = 0;

bool isTriangle(int x, int y, int z)
{
   // cout << "Functi on   " <<x << "   "<<y<<"   "<<z<<endl;
    if(((x+y) > z) && ((x+z) > y) && ((y+z) > x))
    {
        return true;
    }
    return false;
}

bool isDe_Generate(int x, int y, int z)
{
  //  cout <<"INDEGENERATE    :   "<< x <<"   "<<y<<"  "<<z<<endl;
    if(((x+y) == z))
    {
        return true;
    }
    return false;
}

void GetCombination(int arr[],  string result, int n,int k)
{

    if(k==0)
    {
      //  cout <<result <<endl;
        vector<int>vec;
        istringstream tmp(result);
        while(tmp)
        {
            string str;
            tmp  >> str;
            int x ;
           // cout << "STR :::   "<<str<<endl;
            istringstream(str ) >> x;
            vec.push_back(x);
          //  cout <<"inVec : " << x<<endl;
        }
      //  cout << endl;
        s.insert(vec);
        return;
    }

    for(int j = n-1 ; j >= 0 ; j--)
    {
        GetCombination(arr,to_string(arr[j]) + " " + result,j,k-1);
    }
}

int main()
{
    int arr[4];
    string result;
    bool tri = false,seg=false;
    for(int i = 0 ; i < 4 ; i++)
    {
        cin>>arr[i];
      //  cout<<arr[i]<<endl;
    }
    GetCombination(arr,result, 4, 3);
    for(vector<int>vec:s)
    {
     //   cout << "HERE   "<<endl;
        sort(vec.begin(),vec.end()-1);
        //for(int i = 0 ; i < 3 ;i++)
        //  cout<<"Vec : " <<vec[i]<<endl;

        if(isTriangle(vec[0],vec[1],vec[2]))
        {
            tri=true;
            break;
        }
        else
            continue;
    }
    if(!tri)
    {
        for(vector<int>vec:s)
        {
            sort(vec.begin(),vec.end()-1);
            if(isDe_Generate(vec[0],vec[1],vec[2]))
            {
                //cout <<vec[0]<<"   "<<vec[1]<<"   "<<vec[2]<<endl;
                seg = true;
            }
            else
                continue;
        }
    }


    if(tri)
        cout<<"TRIANGLE"<<endl;
    else if(seg)
        cout<<"SEGMENT"<<endl;
    else
        cout<<"IMPOSSIBLE"<<endl;

    return 0;
}
