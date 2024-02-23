#include<stdio.h>
int main()
{
    int n,remainder,reversed=0,original;
    printf("Enter the integer value");
    scanf("%d",&n);
    
    
      
    do
    {
        remainder=n%10;
        reversed=reversed*10+remainder;
        n=n/10;

        
        if(original == reversed)
        
            printf("%d is a palindrome ",original);
        else
        printf(" %dis not a palindrome",original);
    } while (n>0);
    printf("thankyou");
    return 0;