#include<bits/stdc++.h>
using namespace std;

int sum(int a)
{
    int x,y,ans;
    while(a)
    {
        x = a % 10;
        if(x==4 || x==7)
        {
            ans =0;
            a = a /10;
            continue;
        }
        //a = a /10;
        else
        {
            ans = 1;
            break;
        }
    }
    if(ans==0)
        return 1;
    else
        return 0;
}
int main()
{
    int a,b;
    int i;
    cin>>a>>b;
    int c=0;
    for(i=a; i<=b; i++)
    {
        int x = sum(i);
        if(x==1)
        {
            c=1;
            cout<<i<<" ";
        }
    }
    if(c==0)
        cout<<"-1"<<endl;

    return 0;
}
