#include<bits/stdc++.h>
using namespace std;

bool fib(int ara1[], int ara2[])
{
   map<int, int> hm;
    for (int i = 0; i < 3; i++)
    {
        int x = ara1[i];
        hm[x]++;
    }
    for (int i = 0; i < 3; i++)
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
    int ara1[100],ara2[10];
    while(true)
    {
         for(i=0; i<3; i++)
    {
        cin>>ara1[i];
    }
    for(i=0; i<3; i++)
    {
        cin>>ara2[i];
    }
    if(fib(ara1,ara2))
        cout<<"A = B"<<endl;
    else
        cout<<"A != B"<<endl;
    }
}
