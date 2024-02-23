#include<stdio.h>
int main()
{
    int phy,che,math,total;
    float per;
    printf(" Enter the three subject marks=");
    scanf("%d%d%d",&phy,&che,&math);
    total= phy+che+math;
    per= total/3.0;
    if (per>=75)
    {
        printf("Excellent");
    }
    else if (per>=60)
         {
             printf(" first division");
         }
         else if (per>=50)
              {
                  printf("second division");
              }
              else if (per>=40)
                   {
                       printf("third division");
                   }
                   else
                   {
                       printf("fail");
                   }
                   printf("\n marks in physics=%d\n marks in chemistry=%d\n marks in mathematics=%d",phy,che,math);
                   printf("\n total marks=%d\n percentage=%f",total,per);
                   return 0;
}