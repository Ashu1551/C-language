#include<stdio.h>
int main()
{
    int dd,mm,yyyy;
    day:
    month:
    year:
    printf("Enter the date of birth");
    scanf("%d%d%d",&dd,&mm,&yyyy);
    if (dd<1 || dd>30)
    {
        printf("invalid date ! please Enter the again");
        goto day;
    }
    else if(mm<1 || mm>12)
          {
              printf(" invalid month ! please Enter the again");
              goto month;
          }
          else if(yyyy<1950 || yyyy>2022)
               {
                 printf(" invalid year ! please Enter the again");
                 goto year;
               }
               else
               printf(" invalid date of birth");
               
            
            

               return 0;
}