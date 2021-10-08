#include<iostream>
using namespace std;
int main()
{
    float n,a,b,c;
    cin>>n;
    if((n-(int)n)==0)
        cout<<"int "<<n<<endl;
    else
    {
        a = n - (int)n;
        b = n-a;
        cout<<"float "<<b<<" "<<a<<endl;
    }
}