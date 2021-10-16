#include<iostream>
using namespace std;
int main()
{
    int n,i,x,p=0;
    cin>>n;
    int ara[n+1];
    for(i=0; i<n; i++)
    {
        cin>>ara[i];
    }
    cin>>x;
    for(i=0; i<n; i++)
    {
        if(ara[i]==x)
        {
            cout<<i<<endl;
            p=1;
            break;
        }
    }
    if(p==0)
    cout<<"-1"<<endl;
}
