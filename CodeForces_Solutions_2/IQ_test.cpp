#include <iostream>
#include<bits/stdc++.h>

using namespace std;

const int SIZE = 9;
string s[SIZE];

int main()
{
    int counter = 0 , counter2 = 0;

    for(int i = 0; i < 4 ; i++)
        cin >> s[i];

    for(int i = 0; i < 3 ; i++)
    {
        for(int j = 0; j < 3 ; j++)
        {
            counter = 0, counter2=0;
            if(s[i][j] == '#')
                counter++;
            else
                counter2++;
            if(s[i][j+1] == '#')
                counter++;
            else
                counter2++;

             if(s[i+1][j+1] == '#')
                counter++;
            else
                counter2++;
             if(s[i+1][j] == '#')
                counter++;
            else
                counter2++;
            if(counter == 4 || counter2 == 4)
            {
                 cout <<"YES"<<endl;
                 return 0;
            }
            else if(counter == 1&& counter2 == 3)
            {
                cout <<"YES"<<endl;
                return 0;
            }
            else if((counter == 3 && counter2 == 1))
            {
                 cout <<"YES"<<endl;
                 return 0;
            }


        }
    }

    cout <<"NO"<<endl;
    return 0;
}
//const int SIZE = 4 + 5;
//string S[SIZE];
//
//
//
//
//int main()
//{
//    BOOST
//    ///READ();
//    ///WRITE();
//    int T, I, J, K, N, n, m, k, cnt = 0, b = 0, w = 0;
//
//    for(I = 0; I < 4; I++)
//        cin >> S[I];
//
//
//    for(I = 0; I < 3; I++)
//    {
//        for(J = 0; J < 3; J++)
//        {
//            b = 0, w = 0;
//            if(S[I][J] == '#')
//                b++;
//            else
//                w++;
//
//            if(S[I][J + 1] == '#' )
//                b++;
//            else
//                w++;
//
//            if(S[I + 1][J] == '#' )
//                b++;
//            else
//                w++;
//
//            if(S[I + 1][J + 1] == '#')
//                b++;
//            else
//                w++;
//
//            if(b == 4 || w == 4)
//            {
//                cout << "YES\n";
//                return 0;
//            }
//            else if(b == 3 && w == 1)
//            {
//                cout << "YES\n";
//                return 0;
//            }
//            else if(b == 1 && w == 3)
//            {
//                cout << "YES\n";
//                return 0;
//            }
//
//        }
//
//    }
//
//    cout << "NO\n";
//
//
//    return 0;
//}
