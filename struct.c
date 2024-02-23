#include<stdio.h>
#include<stdlib.h>
struct employee
{
    int id;
    float sal;
    char grade;
};
void main()
{
    struct employee e[5];
    int i;
    for (i=0; i<5; i++)
    {
    printf("Enter the id,salary and grade=");
    scanf("%d%f%c",&e[i].id,&e[i].sal,&e[i].grade);
    }

printf("\nemployee\tsalary\tgrade");
for(i=0;i<5;i++)
{
    printf("\n%d\t%f\t%c",e[i].id,e[i].sal,e[i].grade);
}
return 0;
}
