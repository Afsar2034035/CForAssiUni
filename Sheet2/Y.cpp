#include <iostream>
using namespace std;
int main()
{
   int n,i,f1=0,f2=1;
   cin>>n;
   cout<<f1<<" ";

   for(i=1; i<n; i++)
   {
       cout<<f2<<" ";
       int next = f1 + f2;
       f1 = f2;
       f2 = next;
   }
}

