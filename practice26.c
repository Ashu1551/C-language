#include<stdio.h>
int main()
{
    char pwd[5];
    int i;
    printf("Etner the for letter password=");
    for(i=0; i<4; i++)
    {
        pwd[i]=getch();
        printf("*");

    }
    pwd[i]='\0';
    i=strcmp(pwd,"ABCD");
    if(i==0)
    printf("password is matche");
    else
    printf("password not matche");
    return 0;
}