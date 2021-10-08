#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if((c<b) && (b<d))
        cout<<c<<" "<<b<<endl;
    else if((c<b) && b>d)
        cout<<c<<" "<<d<<endl;
    else if((a>c) && (a<=d))
        cout<<a<<" "<<d<<endl;
    else if((a==c)&&(b==d))
        cout<<a<<" "<<b<<endl;
    else
        cout<<"-1"<<endl;
}

