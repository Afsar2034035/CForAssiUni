#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,x,y,a,b,sum;
    cin>>t;
    while(t--)
    {
        sum=0;
        cin>>a>>b;
        if(a>b)
        {
            x=a;
            y=b;
        }
        else
        {
            x=b;
            y=a;
        }
        y=y+1;
        for(i=y; i<x; i++)
        {
            if(i%2==1)
            {
                sum+=i;
            }
        }
        cout<<sum<<endl;
    }
}

