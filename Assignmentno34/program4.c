#include<stdio.h>
void Display(char cValue)
{
    printf("Decimal+\t %d\n",cValue);
    printf("octal+  \t %o\n",cValue);
    printf("Hexadecimal+\t 0X%X\n",cValue);
}
int main()
{
    char ch ='\0';
    printf("Enter they element :");
    scanf("%c",&ch);
    Display(ch);

    return 0;
}