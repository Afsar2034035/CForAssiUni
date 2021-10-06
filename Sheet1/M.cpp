#include<iostream>
using namespace std;
int main()
{
    char a;
    cin>>a;
    if((a>=65 && a<=90)||(a>=97 && a<=122))
    {
        cout<<"ALPHA"<<endl;
        if(a>=65 && a<=90)
            cout<<"IS CAPITAL"<<endl;
        else
            cout<<"IS SMALL"<<endl;
    }
    else if(a>=48 && a<=57)
        cout<<"IS DIGIT"<<endl;
}
