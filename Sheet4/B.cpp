#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1;
    getline(cin,s1);
    int i,l;
    l = s1.length();
    char ch = '\\';

    for(i=0; s1[i]!='\\'; i++)
    {
        cout<<s1[i];
    }
}


