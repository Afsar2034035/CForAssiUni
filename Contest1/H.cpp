#include<iostream>
using namespace std;
int main()
{
    int a,n,k;
    cin>>n>>k>>a;

    long long int x = (n*k)/a;
    long long int y = (x*a);
    long long int z = n*k;

    if(y==z)
    {
        if(x>=-2147483648 && x<=2147483647)
            cout<<"int"<<endl;
        else
            cout<<"long long"<<endl;
    }
    else{
        cout<<"double"<<endl;
    }
    //cout<<x<<endl;
    return 0;
}
