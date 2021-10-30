#include<iostream>
using namespace std;
int main()
{
    long long int a,b,c,d;
    cin>>a>>b>>c>>d;
    long long int m1,m2,m3,m4,n1,n2,n3,n4,o1,o2,o3,o4,p1,p2,p3,p4;

    m1 = a+(b+c);
    n1 = a+(b-c);
    o1 = a+(b*c);
    //p1 = a+(b/c);

    m2 = a-(b+c);
    n2 = a-(b-c);
    o2 = a-(b*c);
    //p2 = a-(b/c);

    m3 = a*(b+c);
    n3 = a*(b-c);
    o3 = a*(b*c);
    //p3 = a*(b/c);

    //m4 = a/(b+c);
    //n4 = a/(b-c);
    //o4 = a/(b*c);
    //p4 = a/(b/c);

    if(m1==d || m2==d || m3==d || n1==d || n2==d || n3==d || o1==d || o2==d || o3==d)
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
}
