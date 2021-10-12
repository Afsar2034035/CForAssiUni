#include<iostream>
using namespace std;
int main()
{
    long long int t,n,i;
    cin>>t;
    while(t--)
    {
        long long int f=1;
        cin>>n;
        for(i=1; i<=n; i++)
        {
            f = f * i;
        }
        cout<<f<<endl;
    }
}
