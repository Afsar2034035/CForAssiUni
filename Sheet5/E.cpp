#include<iostream>
using namespace std;
void swp(int a,int b)
{
    int x,y,z;
    x = a;
    y = b;
    //cout<<x<<endl;
    //cout<<y<<endl;
    z = x;
    x = y;
    y = z;
    cout<<x<<" "<<y<<endl;
    //cout<<y<<endl;

}
int main()
{
    int a,b;
    cin>>a>>b;
    swp(a,b);
}
