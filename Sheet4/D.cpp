#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1,s2,s3;
    //getline(cin,s1);
    cin>>s1>>s2;
    int a,b;
    a = s1.length();
    b = s2.length();

    s3 = s1;
    cout<<a<<" "<<b<<endl;
    cout<<s1<<s2<<endl;
    s1[0]=s2[0];
    s2[0]= s3[0];
    cout<<s1<<" "<<s2<<endl;
}


