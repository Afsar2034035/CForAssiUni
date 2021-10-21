#include<iostream>
using namespace std;
int main()
{
    long long int n,m,i,j;
    cin>>n>>m;
    long long int ara[n+1][m+1];
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            cin>>ara[i][j];
        }
    }

    for(i=0; i<n; i++)
    {
        for(j=m-1; j>=0; j--)
        {
            cout<<ara[i][j]<<" ";
        }
        cout<<endl;
    }
}
