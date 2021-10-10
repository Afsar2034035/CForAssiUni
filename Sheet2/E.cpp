#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i,ara[n+1];
    for(i=0; i<n; i++)
    {
        cin>>ara[i];
    }
    int max = ara[0];
    for(i=1; i<n; i++)
    {
        if(ara[i]>max)
            max = ara[i];
    }
    cout<<max<<endl;
}
