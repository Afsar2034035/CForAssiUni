#include<iostream>
#include<cmath>
#define ll long long int
using namespace std;

ll power1(ll x,ll y)
{
    ll ans=1;
    for(ll i=2; i<=y; i+=2)
        ans*=(x*x);
    return ans;
}

void power(ll x, ll n)
{
    ll i;
    if(x>0 && n==0)
        cout<<"0"<<endl;
    else if(x==0)
        cout<<"0"<<endl;
    else
    {
        ll sum=0;
        for(i=2; i<=n; i+=2)
        {
            sum+=power1(x,i);
            //cout<<sum<<endl;
        }
        cout<<sum<<endl;
    }
}


int main()
{
    ll x,n;
    cin>>x>>n;
    power(x,n);
}
