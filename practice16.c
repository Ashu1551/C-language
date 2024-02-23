#include<stdio.h>
int main()
{
    int n,i,f;
    f=i=1;
    printf("enter a number of fectorial");
    scanf("%d",&n);
    while(i<=n)
    {
        f=f*i;
        i++;
    }
    printf("the fectorial of %d is : %d",n,f);
    return 0;
}