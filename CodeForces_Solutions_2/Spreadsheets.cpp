#include <iostream>
#include<bits/stdc++.h>

using namespace std;
char arr[26]= {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
//R21C23
void RowColNotation(string s)
{
    int RowNo;
    bool found=false;
    string col="",row="";
    for(int i = 1; i  < s.size(); i++)
    {
        if(found)
        {
            col+=s[i];
        }
        if(s[i]=='C')
        {
            found = true;
        }
        if(!found)
        {
            row+=s[i];
        }

    }
    string output="";

    //Convert Column.
    int c=  stoi(col);
    int first = c/26;
    int second=c%26;
//
//    cout<<"first : " <<first<<"   second : "<<second<<endl;
//    cout<<"first : " <<arr[first-1]<<"   second : "<<arr[second-1]<<endl;

    output+=toupper(arr[first-1]) ;
    output+= toupper(arr[second]);
    output +=row;
    cout<<output << endl;


}


void AnotherNumeration(string s)
{

}

void Check(string s)
{
   // cout<<"hhh"<<endl;
    if(isalpha(s[0] && isalpha(s[1])))
    {
        AnotherNumeration(s);
    }
    else
    {
      //  cout<<"here"<<endl;
        RowColNotation (s);
    }
}

int main()
{
    int T ;
    cin >> T;
    for(int t = 0 ; t < T ; t++)
    {
        string s;
        cin>>s;
        Check(s);
    }
    return 0;
}
