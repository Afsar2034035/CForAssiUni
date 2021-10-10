#include<iostream>
using namespace std;
int main()
{
    int t,n;
    int even=0,odd=0,positive=0,negative=0;
    cin>>t;

    int i,ara[t+1];
    for(i=0; i<t; i++)
    {
        cin>>ara[i];
    }
    for(i=0; i<t; i++)
    {
        if(ara[i]>0)
        {
            positive++;
        }
        else if(ara[i]<0)
        {
            negative++;
        }
    }

    for(i=0; i<t; i++)
    {
        if(ara[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    cout<<"Even: "<<even<<endl;
    cout<<"Odd: "<<odd<<endl;
    cout<<"Positive: "<<positive<<endl;
    cout<<"Negative: "<<negative<<endl;
}
