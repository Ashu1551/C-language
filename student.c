#include<stdio.h>
#include<stdlib.h>
struct student
{
    int roll;
    char name[20];
    char f[20];
    char b[20]
};
void main()
{
    struct student s[5];
    int i;
    for (i=0; i<5; i++)
    {
    printf("Enter the roll,Name,FatherName and Branch=");
    scanf("%d%s%s %s",&s[i].roll,&s[i].name,&s[i].f,&s[i].b);
    }

printf("\nRoll Number\tName\tFather Name\tBranch");
for(i=0;i<5;i++)
{
    printf("\n%d\t%s\t%s\t%s",s[i].roll,s[i].name,s[i].f,s[i].b);
}
return 0;
}
