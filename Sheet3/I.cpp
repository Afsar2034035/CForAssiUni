#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t,n,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int ara[n+1];
        for(i=0; i<n; i++)
        {
            cin>>ara[i];
        }
        int smallest=INT_MAX;
        int count=0;
        for (int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if ( abs(ara[i] + ara[j] + j -i ) < smallest )
                {
                    smallest = abs(ara[i] + ara[j] + j - i);
                    count = 1;
                }
                else if (abs(ara[i] + ara[j] + j - i) == smallest)
                    count++;
            }
        }
        cout<<smallest<<endl;
    }
}
