#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int ara[4],i,ara1[4];
    for(i=0; i<3; i++)
    {
        cin>>ara[i];
    }
    for(i=0; i<3; i++)
    {
        ara1[i]=ara[i];
    }
    sort(ara,ara+3);
    for(i=0; i<3; i++)
    {
        cout<<ara[i]<<endl;
    }
    cout<<endl;
    for(i=0; i<3; i++)
    {
        cout<<ara1[i]<<endl;
    }
}
