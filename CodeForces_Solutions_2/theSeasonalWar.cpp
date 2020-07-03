#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int n ;
char mat[30][30];
bool seen[30][30];

int dx2[8] = {0,0,1,-1,1,-1,1,-1};
int dy2[8] ={1,-1,0,0,1,-1,-1,1};

bool valid(int i , int j)
{
    return (i >= 0 && j >= 0 && i < n && j < n);
}

void DFS(int i,int j)
{
    if(seen[i][j])
        return;
    seen[i][j] = 1;
    for(int k = 0 ; k < 8 ; k++)
    {
        int dx = dx2[k] + i;
        int dy = dy2[k] + j;
        if(valid(dx,dy) && !seen[dx][dy] && mat[dx][dy] == '1')
        {
            DFS(dx,dy);
        }
    }

}
int main()
{
    int num = 1;
    while(cin >> n && n!= EOF)
    {
        for(int i = 0 ; i < n ; i++)
        {
           // cin >> mat[i];
            scanf("%s",mat[i]);
        }
        memset(seen,0,sizeof(seen));
        int counter = 0;

        for(int i = 0 ; i < n ; i++)
        {
            for(int j= 0 ; j < n ; j++)
            {
                 //cout << counter<<"   "<<seen[i][j]<<endl;
                if(!seen[i][j] && mat[i][j] == '1')
                {

                    DFS(i,j);
                    ++counter;
                }
            }
        }//cout << counter<<endl;
        printf("Image number %d contains %d war eagles.\n",num++,counter);

    }

    return 0;
}
