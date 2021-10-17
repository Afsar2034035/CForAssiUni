#include<iostream>
using namespace std;
int main()
{
    int n,i,x;
    cin>>n;
    int ara[n+1];
    for(i=0; i<n; i++)
    {
        cin>>ara[i];
    }
    int flag = 0;
    for (i = 0; i <= n / 2 && n != 0; i++)
    {
        if (ara[i] != ara[n - i - 1])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        cout << "NO";
    else
        cout << "YES";
}
