#include<iostream>
using namespace std;
int main()
{
    int n,m,i;
    cin>>n>>m;
    int ara[n+1];
    for(i=0; i<n; i++)
    {
        cin>>ara[i];
    }
    int c,j=1;
    while(j<=m)
    {
        c=0;
        for(i=0; i<n; i++)
        {
            if(ara[i]==j)
            {
                c++;
            }
        }
        j++;
            cout<<c<<endl;
    }
    //cout<<c<<endl;
}
