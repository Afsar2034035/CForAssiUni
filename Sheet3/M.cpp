#include<iostream>
using namespace std;
int main()
{
    int n,i,a=0,b=0;
    cin>>n;
    int ara[n+1];
    for(i=0; i<n; i++)
    {
        cin>>ara[i];
    }
    int max=ara[0];
    int min=ara[0];
    for(i=1; i<n; i++)
    {
        if(ara[i]>max)
        {
            max=ara[i];
            a = i;
        }
        if(ara[i]<min)
        {
            min = ara[i];
            b = i;
        }
    }
    //cout<<max<<" "<<a<<endl;
    //cout<<min<<" "<<b<<endl;
    ara[a]=min;
    ara[b]=max;
    for(i=0; i<n; i++)
    {
        cout<<ara[i]<<" ";
    }
    cout<<endl;
}

