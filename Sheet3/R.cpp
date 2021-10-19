#include<bits/stdc++.h>
using namespace std;

bool fib(int ara1[], int ara2[], int n)
{
   map<int, int> hm;
    for (int i = 0; i < n; i++)
    {
        int x = ara1[i];
        hm[x]++;
    }
    for (int i = 0; i < n; i++)
    {
        int x = ara2[i];
        if(hm[x] == 0)
        {
            return false;
        }
        hm[x]--;
    }
    return true;
}

int main()
{
    int n,i;
    cin>>n;
    int ara1[n+1],ara2[n+1];
    for(i=0; i<n; i++)
    {
        cin>>ara1[i];
    }
    for(i=0; i<n; i++)
    {
        cin>>ara2[i];
    }
    if(fib(ara1,ara2,n))
        cout<<"yes"<<endl;
    else
        cout<<"no"<<endl;
}

