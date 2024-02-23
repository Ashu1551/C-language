#include<stdio.h>
int main()
{
    int M;
    printf(" Enter the number of month");
    scanf("%d",&M);
    switch (M)
    {
        case 11:
        case 12:
        case 1:
        case 2:
        printf("Winter season");
        break;
        case 3:
        case 4:
        case 5:
        case 6:
        printf(" Summer season");
        case 7:
        case 8:
        case 9:
        case 10:
        printf(" Raining Season");
        default:
        printf("invalid Month number");
    }
    return 0;
}