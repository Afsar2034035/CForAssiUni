#include<iostream>
using namespace std;
/*int main()
{
    long long int a,b,c,d,e;
    cin>>a>>b>>c>>d;
    e = (a * b * c * d)%100;
    cout<<e<<endl;
}
*/

int main()
{
    long long int a,b,c,d,e,m,n,o,p;
    cin>>a>>b>>c>>d;
    //e = (a * b * c * d)%100;

    m = a%1000;
    n = b%1000;
    o = c%1000;
    p = d%1000;

    e = (m*n*o*p)%100;
    if(e<10)
        cout<<"0"<<e<<endl;
    else
    cout<<e<<endl;
}
