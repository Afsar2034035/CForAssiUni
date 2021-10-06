#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a;
    b=a/1000;
    //cout<<b<<endl;
    if(b%2==0)
    {
        cout<<"EVEN"<<endl;
    }
    else
    {
        cout<<"ODD"<<endl;
    }
}
