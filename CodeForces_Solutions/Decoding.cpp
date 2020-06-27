#include <iostream>
#include <vector>
#include <algorithm>
#include <string>


int main()
{
    int n;
    std::cin>>n;
    std::string s,res;
    std::cin >> s;
    std::vector<char>vec(n);

    std::string t ="";
    t+= s[0];
    res.append(t);


    for(int i = 1; i < n ; i++)
    {
        if(i%2==0)
        {
            std::string j ="";
            j+=s[i];
            res.append(j);
        }

        else
        {
            std::string j ="";
            j+=s[i];
            res.insert(0,j);
        }

    }
    if(n%2==0)
    {
        reverse(res.begin(),res.end());
        std::cout << res<<std::endl;
    }
    else
        std::cout<<res<<std::endl;


    return 0;
}
