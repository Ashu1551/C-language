#include<stdio.h>
int main()
{
    int num,original,r,result=0;
    printf("Enter the integer number");
    scanf("%d",&num);
    
    for(original=num; original!=0; ++num)
    {
    r= original%10;
    result = r*r*r;
    original=original/10;
    }
    if(result==num)
    printf("%d is a armstrong number",num);
    else
    printf("%d is a not armstrong number",num);
    return 0;

}