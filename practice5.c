#include<stdio.h>
int main()
{
    int amaunt,a,b,c,d,e;
    printf(" Enter the amaunt rupees");
    scanf("%d",&amaunt);
    a=amaunt%1000;
    amaunt/1000;
    printf("\n the no. of  one thousand are=%d",a);
    b=amaunt%500;
    amaunt=amaunt/500;
    printf("\n the no. of five hundred are=%d",b);
    c=amaunt%200;
    amaunt/200;
    printf("\n the no. of two hundred are=%d",c);
    d=amaunt%100;
    amaunt=amaunt/100;
    printf("\n the no. of one hundred are=%d",d);
    e=amaunt%50;
    amaunt/50;
    printf("\n the no. of fifty are=%d",e);
    return 0;

}