#include<iostream>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1;
    int i,f=0;
    int l = s1.length();
    for(i=0; i<l; i++)
    {
        if(s1[i]!=s1[l-1-i])
        {
            f=1;
            break;
        }
    }
    if(f==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
