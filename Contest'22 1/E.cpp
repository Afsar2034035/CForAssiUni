#include<iostream>
using namespace std;
int main()
{
    char c;
    cin>>c;
    int l = c;
    c = l+1;

    if(l==122)
    {
        cout<<"a"<<endl;
    }
    else
    {
        cout<<c<<endl;
    }

    return 0;
}
