#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int ara[n+1];
    for(i=0; i<n; i++)
    {
        scanf("%d",&ara[i]);
    }
    int min=ara[0];
    int a=0;
    for(i=0; i<n; i++)
    {
        if(ara[i]<min)
        {
            min = ara[i];
        }
    }
        for(i=0; i<n; i++)
    {
        if(min==ara[i])
        {
            a++;
        }
    }
    if(a==0 || a%2==0)
        printf("Unlucky");
    else
        printf("Lucky");
    return 0;
}

