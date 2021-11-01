#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int l = s.length();
    int x = 0;
    char c[100] = "ICPC ASSIUT";
    for(int i=0; i<11; i++)
    {
        if(s[0]==c[i])
        {
            x = i;
            cout<<"Starts with letter "<<c[i]<<" in phrase ICPC ASSIUT"<<endl;
            return 0;
        }

    }

    cout<<"Not starts with any letter in phrase ICPC ASSIUT"<<endl;
    return 0;
}
