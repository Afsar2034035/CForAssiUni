#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    char ch;
    cin>>ch>>n;
    int ara[n+1];
    for(i=0; i<n; i++)
    {
        cin>>ara[i];
    }
    for(i=0; i<n; i++)
    {
        for(j=1; j<=ara[i]; j++)
        {
            cout<<ch;
        }
        cout<<endl;
    }
}

