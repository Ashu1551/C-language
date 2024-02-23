#include<stdio.h>
int main()
{
    int arr[5],brr[0],r,rev,i,j;
    for (i=0; i<5; i++)
    {
        printf("Enter the element: ");
        scanf("%d",&arr[5]);

    }
    for (j=0; j<5; j++)
    {
        brr[j] = arr[i];
    }
    for (i=0 ;i<5; i++)
    {
        r=brr[j]%10;
        rev = rev*10+r;
        brr[j]=brr[j]/10;
    }
    for (j=0; j< 5; j++)
    {
        printf("%d\n",brr[j]);
    } 
    return 0;

    
    
    
    

}