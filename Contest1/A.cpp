#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double x,y,p;
    cin>>x>>p;

    y = (100*p)/(100-x);

    cout<<fixed<<setprecision(2);
    cout<<y<<endl;
}
