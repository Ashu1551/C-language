#include<stdio.h>
int main()
{
    int n,count=0,d;
    
    
        printf(" Enter the integer number");
        scanf("%d",&n);
    do  
    { 
        d=n%10;
        n=n/10;
        ++count;
        

    }while(n>0);
    printf("number of digit %d",count);
    return 0;
    

}