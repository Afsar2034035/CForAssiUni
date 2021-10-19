#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,x=0,y=0;
    cin>>n;
    int ara[n+1][n+1];

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            cin>>ara[i][j];
        }
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(ara[i]==ara[j])
            {
                x+=ara[i][j];
            }
        }
    }

    for(i=0; i<n; i++)
    {
        y+=ara[i][n-1-i];
    }

    int z = x - y;
    if(z>0)
    {
        cout<<z<<endl;
    }
    else
    {
        cout<<-z<<endl;
    }
}
