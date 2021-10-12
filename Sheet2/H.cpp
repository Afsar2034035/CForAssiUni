#include<iostream>
using namespace std;
int main()
{
    int n,i,m,f=0;
    cin>>n;
    m=n/2;
    for(i=2; i<=m; i++)
    {
        if(n%i==0)
        {
            f=1;
            break;
        }
    }
    if(f==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
