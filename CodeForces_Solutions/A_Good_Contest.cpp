#include <iostream>

using namespace std;

int main()
{
    int n , before , after , c = 0;
    string x;
    cin >> n;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> x;
        cin >> before >> after;
        if((before >= 2400 )&&(after >= 2400 )&& (after > before))
        {
            c++;
        }
    }
    if(c > 0)
        cout << "YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
