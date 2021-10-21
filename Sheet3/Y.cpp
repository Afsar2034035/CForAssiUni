#include<iostream>
using namespace std;
int main()
{
    long long int n,q,l,r,i,j;
    cin>>n>>q;
    long long int sum=0,ara[n+1];
    for(i=0; i<n; i++)
    {
        cin>>ara[i];
    }
    while(q--)
    {
        cin>>l>>r;
        for(i=l-1; i<r; i++)
        {
            sum+=ara[i];
        }
        cout<<sum<<endl;
        sum=0;
    }
}
