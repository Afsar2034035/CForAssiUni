#include<iostream>
#define ll long long int
using namespace std;
int main()
{
    ll n,q,x,i,c=0;
    cin>>n>>q;
    ll ara[n+1];
    for(i=0; i<n; i++)
    {
        cin>>ara[i];
    }
    while(q--)
    {
        cin>>x;
        for(i=0; i<n; i++)
        {
            if(ara[i]==x)
            {
                c=1;
                break;
            }
        }
        if(c==1)
            cout<<"found"<<endl;
        else
            cout<<"not found"<<endl;
        c=0;
    }
    return 0;
}
