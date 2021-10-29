#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ara[n+1],a;
    for(int i=0; i<n; i++)
    {
        cin>>ara[i];
    }
    for(int i=0; i<n; i++)
    {
        if(ara[i]==0)
        {
            a=ara[i];
            ara[i] = ara[i+1];
            ara[i+1]=a;
        }
    }

    for(int i=0; i<n; i++)
    {
        cout<<ara[i]<<" ";
    }
    return 0;
}
