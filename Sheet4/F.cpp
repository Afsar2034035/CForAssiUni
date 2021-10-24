#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t;
    string s;
    cin>>t;
    int i;
    while(t--)
    {
        cin>>s;
        int l = s.length();
        if(l<11)
        {
            cout<<s<<endl;
        }
        else if(l>10)
        {
            cout<<s[0]<<(l-2)<<s[l-1]<<endl;
        }

    }
}


