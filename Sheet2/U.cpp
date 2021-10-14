#include<iostream>
using namespace std;

int res(int n, int a, int b)
{
    int r,d=0;
    while(n!=0)
    {
        r = n % 10;
        d = d + r;
        n = n / 10;
    }
    if(d>=a && d<=b)
        return 1;
    else
        return 0;
}
int main()
{
    int n,a,b,i,sum=0;
    cin>>n>>a>>b;

    for(i=1; i<=n; i++)
    {
        int s = res(i,a,b);
        if(s==1)
        sum = sum + i;
        //cout<<res(i,a,b)<<endl;
    }
    //sum = res(n,a,b);
    cout<<sum<<endl;
}
