#include<stdio.h>

int Count(char * str)
{
    static  int iCount = 0;
    if(*str == '\0')
    {
        return iCount;
    }
    if(*str == ' ')
    {
        iCount++;
    }
    str++;
    Count(str);
   
}


int main()
{
    int iRet = 0;
    char ch[50];

    printf("Enter the string:\n");
    scanf("%[^\n]s",ch);

    iRet = Count(ch);

    printf("The total spaces are:%d\n",iRet);

    return 0;
}