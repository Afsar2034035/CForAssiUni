#include<iostream>
using namespace std;
int main()
{
    int a,b,y,x,sum=0,i;
    while(cin>>a>>b)
    {
        if(a<1 || b<1)
            break;
        if(a>b)
        {
            x = a;
            y = b;
        }
        else
        {
            x = b;
            y = a;
        }
        for(i=y; i<=x; i++)
        {
            cout<<i<<" ";
            sum+=i;
        }
        cout<<"sum ="<<sum<<endl;
        sum=0;
    }
}
