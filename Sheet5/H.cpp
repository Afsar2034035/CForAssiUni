#include<iostream>
using namespace std;

void cha(int n, char c)
{
    for(int i=1; i<=n; i++)
    {
        cout<<c<<" ";
    }
    cout<<endl;
}

int main()
{
    int t,n;
    char c;
    cin>>t;
    while(t--)
    {
        cin>>n>>c;
        cha(n,c);
    }
}
