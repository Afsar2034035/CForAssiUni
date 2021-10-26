#include<iostream>
#define ll long long int
using namespace std;

void bin(ll n)
{
    ll a,d=0;
    ll i;
    while(n>0)
    {
        i = n %2;
        d = i + d*10;
        n = n / 2;
    }
    a=d;
    cout<<d<<endl;
    ll d1=0;
    while(d!=0)
    {
        ll r=d%10;
        d1 = d1*10 + r;
        d = d /10;
    }
    if(a==d1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    //if(a==d)
        //cout<<""<<endl;
    //return d;
}

int odd(int n)
{
    if(n%2==1)
        return 1;
    else
        return -1;
}
int main()
{
    ll n;
    cin>>n;
    ll c;
    c=odd(n);
    if(c==1)
    {
        bin(n);
        //cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
}
