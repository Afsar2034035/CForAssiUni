#include<iostream>
using namespace std;
int main()
{
    int l,i,j;
    string s,a;
    getline(cin,s);
    //cout<<s<<endl;
    l = s.length();
    for(i=l-1,j=0; i>=0; i--,j++)
    {
        a[j]=s[i];
    }
    cout<<a<<endl;
}
