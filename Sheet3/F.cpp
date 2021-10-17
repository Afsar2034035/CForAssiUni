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
    for(i=n-1; i>=0; i--)
    {
        cout<<ara[i]<<" ";
    }
}
