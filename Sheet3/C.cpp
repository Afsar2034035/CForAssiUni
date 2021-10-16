#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int ara[n+1];
    for(i=0; i<n; i++)
    {
        cin>>ara[i];
    }

    for(i=0; i<n; i++)
    {
        if(ara[i]==0)
            cout<<"0 ";
        else if(ara[i]>0)
            cout<<"1 ";
        else
            cout<<"2 ";
    }
}
