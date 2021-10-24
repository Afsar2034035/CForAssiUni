#include<iostream>
#include<string>
using namespace std;
int main()
{
    int a,b;
    string s1,s2;
    cin>>s1>>s2;

    a = s1.length();
    b = s2.length();

    if(a>b)
        cout<<s2<<endl;
    else if(a<b)
        cout<<s1<<endl;
    else
        cout<<s1<<endl;
}


