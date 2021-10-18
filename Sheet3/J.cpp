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
    int min=ara[0];
    int a=0;
    for(i=0; i<n; i++)
    {
        if(ara[i]<min)
        {
            min = ara[i];
        }
    }
        for(i=0; i<n; i++)
    {
        if(min==ara[i])
        {
            a++;
        }
    }
    if(a==0 || a%2==0)
        cout<<"Unlucky"<<endl;
    else
        cout<<"Lucky"<<endl;
    return 0;
}

