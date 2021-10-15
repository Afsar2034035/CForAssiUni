#include<iostream>
#define ll long long int
using namespace std;

ll bin(ll n)
{
    ll d=0;
    ll i;
    while(n>0)
    {
        i = n %2;
        if(i==1)
        {
            d = (d*10) + 1;
        }
        n = n / 2;
    }
    //cout<<endl<<d<<endl;
    return d;
}

ll dec(ll n)
{
    ll d=0, base=1, r;
    while(n!=0)
    {
        r = n % 10;
        d = d + r * base;
        n = n / 10;
        base = base * 2;
    }
    //cout<<d<<endl;
    return d;
}

int main()
{
    ll n,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll b = bin(n);
        ll d = dec(b);
        //cout<<b<<endl;
        cout<<d<<endl;
    }
}
