#include<iostream>
using namespace std;

void loop(int n)
{
    for(int i=2; i<=n; i++)
    {
        cout<<" "<<i;
    }
}
int main()
{
    int n;
    cin>>n;
    if(n==1)
    cout<<"1";
    else
    {
        cout<<"1";
        loop(n);
    }
    //loop(n);
}
