#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n,i,c=0;
    cin>>n;
    if(n<2)
        cout<<"NO"<<endl;
    else
    {
     for(i=2; i<=n/2; i++)
     {
         if(n%i==0)
         {
             c=1;
             break;
         }
     }
     if(c==0)
        cout<<"YES"<<endl;
     else
        cout<<"NO"<<endl;
    }
}
