#include<stdio.h>
int main()
{
    int age;
    char Maritalstatus,Gender;
    printf("Enter Maritalstatus,Gender,age");
    scanf("%c%c%d",&Maritalstatus,&Gender,&age);
    if(Maritalstatus=='M')
      printf("insurance provide");
    
    else 
    {
         if(Gender=='m')
         { 
            if(age>=35)
              printf(" insurance provide");
            else 
              printf("insurance is not provide");
         }      
        else
         
          if(age>=30)
                printf("insurance provide");
            else
                printf("insurance is not provide");
            
}             
return 0;
}


