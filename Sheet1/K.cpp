#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;

    if(a>=b && a>=c)
    {
        if(b>=c)
            cout<<c<<" ";
        else
            cout<<b<<" ";
        cout<<a<<endl;
    }
    else if(b>=a && b>=c)
    {
        if(a>=c)
            cout<<c<<" ";
        else
            cout<<a<<" ";
        cout<<b<<endl;
    }
    else if(c>=b && c>=a)
    {
        if(a>=b)
            cout<<b<<" ";
        else
            cout<<a<<" ";
        cout<<c<<endl;
    }
}
