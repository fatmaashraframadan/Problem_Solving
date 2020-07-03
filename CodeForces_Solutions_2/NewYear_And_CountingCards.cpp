#include <iostream>

using namespace std;

int main()
{
    string s;
    int counter = 0;
    cin >> s;
    for(int i = 0 ; i < s.size() ; i++)
    {
        s[i] = tolower(s[i]);
    }
    for(int i = 0 ; i < s.size() ; i++)
    {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            counter++;
        else if(!isalpha(s[i]))
        {
            s[i] = s[i] - '0';
            if(s[i] %2 !=0)
                counter++;
        }

    }
    cout << counter<<endl;
    return 0;
}
