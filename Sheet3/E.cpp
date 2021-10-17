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
            a=i;
        }
    }
    cout<<min<<" "<<a+1<<endl;
    return 0;
}
