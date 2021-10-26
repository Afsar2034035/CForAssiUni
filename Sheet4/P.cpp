#include<iostream>
#include<string>
using namespace std;
int main()
{
    int l=1,a;
    string s;
    getline(cin,s);
    //cout<<s<<endl;

    a = s.length();
    for(int i=0; i<a; i++)
    {
        if(s[i]==' ')
        {
            if(s[i+1]!='.' || s[i+1]!='!' || s[i+1]!='?' || s[i+1]!=',')
                l++;
        }
            //l++;
    }
    cout<<l<<endl;
}
