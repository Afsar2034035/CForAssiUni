#include<iostream>
using namespace std;
int main()
{
    long long int n,a,b,t,sum;
    cin>>n;
    a=n/4;
    b=n-(4*a);

    /*if(a%2==0)
        cout<<a<<" "<<b<<endl;
    else
        cout<<a<<" "<<b+1<<endl;*/

    if(n%4==1)
    {
        //if(n%2==0)
            cout<<a<<" "<<b-1<<endl;
        //else
            //cout<<a<<" "<<b+1<<endl;
    }
    else
    {
        if(a%2==0)
            cout<<a<<" "<<b<<endl;
        else
            cout<<a<<" "<<b+1<<endl;
    }
    return 0;
}
