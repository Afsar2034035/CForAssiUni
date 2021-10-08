#include<iostream>
using namespace std;
int main()
{
    long long a,b,c,d;
    char c1,c2;
    cin>>a>>c1>>b>>c2>>c;
    if(c1=='+')
    {
        d = a + b;
        if(c==d)
            cout<<"Yes"<<endl;
        else
            cout<<d<<endl;
    }
    else if(c1=='-')
    {
        d = a - b;
        if(c==d)
            cout<<"Yes"<<endl;
        else
            cout<<d<<endl;
    }
    else if(c1=='*')
    {
        d = a * b;
        if(c==d)
            cout<<"Yes"<<endl;
        else
            cout<<d<<endl;
    }
}
