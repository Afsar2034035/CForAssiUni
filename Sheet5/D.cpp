#include<iostream>
#define ll long long int
using namespace std;
void prime(ll n)
{
    ll c=0;
    ll a;
    a = n%1000;
    for(ll i=2; i<=a/2; i++)
    {
        if(a%i==0)
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

int main()
{
    ll t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n==1)
            cout<<"NO"<<endl;
        else
            prime(n);
    }
}
