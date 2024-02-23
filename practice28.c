#include<stdio.h>
void add(int,int);
void sub(int,int);
void show(int);
void main()
{
    int a,b;
    printf("%d%d",&a,&b);
    add(a,b);
    sub(a,b);
    mult(a,b);
    printf("End of main function");
    return 0;
}
void main(int a,int b)
{
    int c;
    c= a+b;
    show(c);
    printf("\n end of sub function");
}
void sub(int a,int b)
{
    int c;
    c= a-b;
    show(c);
    printf("\n end of sub function");
}
void show(int c)
{
    printf("result is =%d",c);
}
