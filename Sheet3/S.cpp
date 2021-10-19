#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,x,c=0;
    cin>>n>>m;
    int ara[n+1][m+1];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>ara[i][j];
        }
    }
    cin>>x;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(ara[i][j]==x)
            {
                c=1;
                break;
            }
        }
    }

    if(c==0)
    {
        cout<<"will take number"<<endl;
    }
    else
    {
        cout<<"will not take number"<<endl;
    }
}
