#include<stdio.h>
int main()
{
    int year;
    printf(" Enter the year");
    scanf("%d",&year);
    if (year%4==0)
    {
        printf(" leap year is yes");
    }
    else
    {
        printf("leap year is no");

    }
    printf("\n year=%d",year);
    return 0;
    
}