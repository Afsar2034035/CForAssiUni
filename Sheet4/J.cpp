#include<iostream>
using namespace std;
int main()
{
    string s;
    char c='a';
    cin>>s;
    int i,l;

    l = s.length();
    cout<<l<<endl;

    /*while(s[i]!='\0')
    {
        cout<<i<<endl;
        i++;
    }*/
    int j,a=0,k=0;
    for(j=0; j<l; j++)
    {
        for(i=0; i<26; i++)
        {
            if(s[i]==c)
            {
                a++;
                k=1;
            }
        }
        cout<<a<<endl;
        a=0;
        k=0;
    }
}
