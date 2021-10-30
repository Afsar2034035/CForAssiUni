#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll a,b,i,sum=0,e=0,o=0;
    cin>>a>>b;
    if(a<b)
    {
        for(i=a; i<=b; i++)
        {
            sum+=i;
            if(i%2==0)
                e+=i;
            else
                o+=i;
        }
    }
    else
    {
     for(i=b; i<=a; i++)
        {
            sum+=i;
            if(i%2==0)
                e+=i;
            else
                o+=i;
        }
    }
    cout<<sum<<endl;
    cout<<e<<endl;
    cout<<o<<endl;
}
