#include<dos.h>
int main()
{
    int i;
    for(i=0; i<=10; i++)
    {
        gotoXY(40,12);
        printf("%d",i);
        delay(1000);

    }
    return 0;
}