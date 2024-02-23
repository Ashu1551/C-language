#include<stdio.h>
int fact(int);
int main()
{
   int a; 
    a=fact(6);
    printf("the factorial is=%d",a);
    return 0;
}
int fact(int x)
{  
    int i,f=1;
    
    for(i=1;i<= x; i++)
    {
       f=f*i;
    }
    return f;
     
}