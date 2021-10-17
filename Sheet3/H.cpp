#include<iostream>
using namespace std;
int main()
{
    int j,k,n,b;
    cin>>n;
    int a[n];
        for(j=0;j<n;j++)
        {
            cin>>a[j];
        }
        for(j=0;j<n;j++)
        {
            for(k=j+1;k<n;k++)
            {
                if(a[j]>a[k])
                {
                    b = a[j];
                    a[j]=a[k];
                    a[k]=b;
                }
            }
        }
        for(j=0;j<n;j++)
        {
            cout<<a[j]<<" ";
        }
        cout<<endl;
}



