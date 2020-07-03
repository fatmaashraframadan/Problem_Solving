#include <iostream>
#include<bits/stdc++.h>

using namespace std;

string palindrome = "";

bool isPalindrome(string s)
{
    int len =s.size();//0 1 2 3 4 5
    for(int t = 0 ; t < s.size() ; t++)
    {
        if(s[t] != s[len-t-1])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int T;
    cin >> T;
    for(int t = 0 ; t < T; t++)
    {
        palindrome = "";
        int n;
        cin>>n;
        vector<string>vec;
        deque<string>Q;
        string res= "";
        for(int i = 0 ; i < n; i++)
        {
            string s;
            cin >> s;
            vec.push_back(s);
        }
        for(int i = 0 ; i < vec.size() ; i++){
                string s = vec[i];int len = s.size();
            string j , l;
            j = sort(vec[i].begin() , vec[i].end());
            l = sort(vec[i].begin() , vec[i].end());
            if(j==l){
                Q.pop_front(vec[i]);
                Q.pop_front(vec[len-i-1]);
            }
        }
    }
    return 0;
}
