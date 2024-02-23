#include<stdio.h>
int main()
{
    int amount,a,b,c,d,e;
    printf(" Enter the amaunt rupees");
    scanf("%d",&amount);
    a=amount%1000;
    if(a == 1000)
    {printf("\n the no. of  one thousand are=%d",a);
    }
    b=amount%500;
    if (b == 500)
    {
    printf("\n the no. of five hundred are=%d",b);
    return 0;

}