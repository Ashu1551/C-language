#include<stdio.h>
int main ()
{
    int i,N;
    i = 1;
    printf("Enter the value of N");
    scanf("%d",&N);
    printf("even  number from 1 to %d\n",N);
    while (N<=i)
    {
        if(i%2==0)
         printf("%d\n",i);
       i++;
    }

    return 0;
    

}