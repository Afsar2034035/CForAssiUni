#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    string s;
    cin>>s;
    int l = s.length();
    int x=0;
    //cout<<l<<endl;
    int i=0,c;
    while(s[i]!='\0')
    {
        if(s[i]=='-')
        {
            x++;
        }
        i++;
    }
    c = a + b+1;
        if(s[a]=='-' && l==c && x==1)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;

}

