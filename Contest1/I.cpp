#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a;

    if(a==10 || a==20 || a==30 || a==40 || a==50 || a==60 || a==70 || a==80 || a==90)
    cout<<"YES"<<endl;
    else
    {
        b = a/10;
    c = a%10;
        if(b%c==0 || c%b==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    }

    //cout<<a<<endl;
    //cout<<b<<endl;
    //cout<<c<<endl;
}
