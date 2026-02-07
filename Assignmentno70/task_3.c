#include<stdio.h>
int CountStr(char *str)
{
    static int iCount =0;
    if(*str == '\0')
    {
        return iCount;
    }
    iCount++;
    return CountStr(str+1);
}

int main()
{
    int iRet = 0;
    char ch[20]={'\0'};
    
    printf("Enter the string: ");
    scanf("%s",ch);

    iRet = CountStr(ch);

    printf("The count will be:%d\n",iRet);

    return 0;
}