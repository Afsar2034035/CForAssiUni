#include<iostream>
using namespace std;
int main()
{
    int n,m,r,d=0;
    cin>>n;
    m=n;
    while(n!=0)
    {
        r = n % 10;
        d = d*10 + r;
        n = n / 10;
    }
    cout<<d<<endl;
    if(m==d)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
