#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int ara[n+1];
    long long int sum=0;
    for(i=0; i<n; i++)
    {
        cin>>ara[i];
        sum = sum + ara[i];
    }
    if(sum>0)
        cout<<sum<<endl;
    else
        cout<<-sum<<endl;
}
