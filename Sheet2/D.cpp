#include<iostream>
using namespace std;
int main()
{
    int a;
    while(cin>>a)
    {
        if(a==1999)
        {
            cout<<"Correct"<<endl;
            return 0;
        }
        else
        {
            cout<<"Wrong"<<endl;
        }
    }
    return 0;
}
