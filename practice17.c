#include<stdio.h>
int main()
{
    int i,n;
    i =1;
    printf(" Enter the integer number");
    scanf("%d",&n);
    while(i<=n)
    {
        if(n%i==0)
        {
            printf("%d",i);
        }
        i++;
    }
    return 0;
}