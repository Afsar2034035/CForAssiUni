#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cin>>n;

    int ara[n+1];
    for(i=0; i<n; i++)
    {
        //scanf("%d",&ara[i]);
        cin>>ara[i];
    }

    for(i=0; i<n; i++)
    {
        //printf("A[%d] = %d\n",i,ara[i]);
        if(ara[i]<=10)
        cout<<"A["<<i<<"] = "<<ara[i]<<endl;
    }
}

