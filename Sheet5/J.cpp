#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    double sum=0;
    cin>>n;
    double ara[n+1];
    for(int i=0; i<n; i++)
    {
        cin>>ara[i];
        sum+=ara[i];
    }
    cout<<fixed<<setprecision(6);
    cout<<(sum/n)<<endl;
}
