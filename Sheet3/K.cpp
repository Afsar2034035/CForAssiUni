#include<iostream>
using namespace std;
int main()
{
    string n;
    cin>>n;
    string a;
    cin>>a;
    long long int i=0,t,sum=0;
    while (a[i] != '\0')
    {
        t   = a[i] - '0';
        sum = sum + t;
        i++;
    }
    cout<<sum<<endl;
}

