#include<stdio.h>
int main()
{
    int a,b;
    int op;
    printf("1.Addition\n2.subtraction\n3.multiplication\n4.division\n5.Mod\n");
    printf("Enter the two number");
    scanf("%d%d",&a,&b);
    printf("Enter the choice");
    scanf("%d",&op);
    switch (op)
    {
    case 1:
     printf("sum of %d and %d = %d",a,b,a+b);
        break;
    case 2:
    printf("Difference of %d and %d =%d",a,b,a-b);
    break;
    case 3:
    printf(" Multiplication of %d and %d =%d",a,b,a*b);
    break;
    case 4:
    printf("Division of %d and %d =%d",a,b,a/b);
    break;
    case 5:
    printf(" Mod of %d and %d = %d",a,b,a%b);
    break;    
    default:
    printf("Enter your correct choice");
    }
    return 0;
}