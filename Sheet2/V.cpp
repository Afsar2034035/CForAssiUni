#include <iostream>
using namespace std;

int main()
{
    int i,j,n,k=0;
    cin>>n;
    for(i=1; i<=n*4; i++)
    {
        if(i%4==0)
            cout<<"PUM"<<endl;
        else
            cout<<i<<" ";
    }
}

