#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int ara[n+1];
    for(i=0; i<n; i++)
    {
        cin>>ara[i];
    }
    int max=ara[0];
    int min=ara[0];
    for(i=1; i<n; i++)
    {
        if(ara[i]>max)
            max = ara[i];
        if(ara[i]<min)
            min = ara[i];
    }
    int a=0;
    for(int j=0; j<n; j++)
    {
        for(i=2; i<=(ara[j]/2); i++)
        {
            if(ara[j]%i!=0)
            {
              a++;
            }
        }
    }

    cout<<"The maximum number : "<<max<<endl;
    cout<<"The minimum number : "<<min<<endl;
    cout<<"The number of prime numbers : "<<a<<endl;
    cout<<"The number of palindrome numbers : "<<endl;
    cout<<"The number that has the maximum number of divisors : "<<endl;

}
