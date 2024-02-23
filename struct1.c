#include<stdio.h>
#include<stdlib.h>
struct employee
{
    int id;
    float sal;
    char name[20];
};
void main()
{
    struct student s1,s2,t;
    printf("Enter the id,Salary and Name=");
    scanf("%d%f%s",&s1.id,&s1.sal,&s.name);
    printf("Enter the id, Salary and Name=");
    scanf("%d%f%s",s2.id,s2.sal,s2.name);

    t=s1;
    s1=s2;
    s2=t;
    printf("first emp id=%d sal=%f Name=%s",s1.id,s1.sal,s1.name);
    printf("second emp id=%d sal=%f Name=%s",s2.id,s2.sal,s2.name);
    return 0;

}
