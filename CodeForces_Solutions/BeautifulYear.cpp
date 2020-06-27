#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    set<char>repeat_test;
    char x;
    string s = "";
    for(int i = 0  ; i < 4 ; i++)
    {
        cin >>x;
        repeat_test.insert(x);
        s+=x;
    }
    int year = stoi(s);
    s = "";
    year+=1;
    s = to_string(year);
    repeat_test.clear();
    repeat_test.insert(s[0]);
    repeat_test.insert(s[1]);
    repeat_test.insert(s[2]);
    repeat_test.insert(s[3]);

    while(repeat_test.size() != 4)
    {
        year = stoi(s);
        s = "";
        year+=1;
        s = to_string(year);
        repeat_test.clear();
        repeat_test.insert(s[0]);
        repeat_test.insert(s[1]);
        repeat_test.insert(s[2]);
        repeat_test.insert(s[3]);
    }
    cout <<year;

    return 0;
}
