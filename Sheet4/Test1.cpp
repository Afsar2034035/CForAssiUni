#include<iostream>
#include<string>
using namespace std;
int main()
{
    int a,c=0;
    string s1,s2;
    cin>>s1;

    a = s1.length();
    int i,j;
    for(j=0,i=a-1; i>=0; i--,j++)
    {
        s2[j] = s1[i];
    }
    s2[j]='\0';
    /*while(s1[i]!='\0' && s2[j]!='\0')
    {
        if(s1[i]!=s2[j])
        {
            c=1;
            break;
        }
        i++;
    }*/
    cout<<s1<<endl;
    cout<<s2<<endl;
    if(c==0)
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
}

