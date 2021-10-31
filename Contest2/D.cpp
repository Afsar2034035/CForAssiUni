#include <iostream>
using namespace std;
int main()
{
    long long int t,a,b,x,y,z;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a<b)
        {
            x = (b-a+1)*a;
            y = (b-a)*(b-a+1)/2;
            cout<<x+y<<endl;
        }
        else
        {
            x = (a-b+1)*b;
            y = (a-b)*(a-b+1)/2;
            cout<<x+y<<endl;
        }

    }
    return 0;
}
