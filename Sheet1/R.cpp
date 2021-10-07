#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a;
    b = a/365;
    c = (a%365)/30;
    d = ((a%365)%30);
    //cout<<b<<endl;
    //cout<<c<<endl;
    cout<<b<<" years"<<endl;
    cout<<c<<" months"<<endl;
    cout<<d<<" days"<<endl;
}
