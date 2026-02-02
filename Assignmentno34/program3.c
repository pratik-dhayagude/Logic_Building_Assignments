#include<stdio.h>
#include<stdbool.h>
bool Display(char ch)
{
    if(ch == '!'|| ch =='@' || ch =='#' ||ch == '$'||
       ch == '%'||ch == '^'||ch == '&'||ch == '*')
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    char cValue = '\0';
    bool bRet = false;
    printf("Enter the Element :");
    scanf("%c",&cValue);

    bRet = Display(cValue);
    if(bRet == true )
    {
        printf("It is a special Character:");

    }
    else
    {
         printf("It is not special Character:");
    }

    return 0;
}