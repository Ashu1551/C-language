#include<stdio.h>
int main()
{
    char cptl[30],sml[30];
    int ascii;
    printf("Enter the capital letter");
    scanf("%c",&cptl);
    ascii = cptl+32;
    printf("%c character in small letter is : %c",cptl,ascii);
    printf("Enter the small letter");
    scanf("%c",&sml);
    ascii = sml-32;
    printf("%c character in capital letter is :%c",sml,ascii);
    return 0;

}