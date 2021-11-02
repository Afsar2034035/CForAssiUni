#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;

    double x = (1.0*a/4)*(1.0*a/4)*3.14159265359;
    cout<<setprecision(6)<<fixed;
    cout<<((a*b)-(x*2))/2<<endl;

    return 0;

}
