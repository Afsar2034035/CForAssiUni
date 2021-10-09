#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long int a,b,c,d,e,f,g;
    cin>>a>>b>>c>>d;
    e=pow(a,b);
    f=pow(c,d);
    if(e>f)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
