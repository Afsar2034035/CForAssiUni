#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,r,d=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n==0)
            cout<<"0"<<endl;
        else{
                 while(n!=0)
        {
            r = n % 10;
            cout<<r<<" ";
            d = d*10 + r;
            n = n / 10;
        }
        cout<<endl;
        }
    }
}

