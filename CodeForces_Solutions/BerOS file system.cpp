#include "iostream"
#include "math.h"
#include <stack>
#include <vector>

using namespace std;

int main()
{
    char s[101],t[101];
    int j = 0;
    cin >> s;


    for(int i = 0 ;s[i] !='\0' ; ++i)
    {
        if(s[i]==s[i+1]&&s[i]=='/')
			continue;

        else
        {
            t[j++]=s[i];
        }
    }

    for (int i = 0; (t[j-1]=='/')? i< j-1:i<j ; ++i)
    {

        cout<<t[i];

    }
    if(j==1)
        cout<<'/';


    return 0;
}
