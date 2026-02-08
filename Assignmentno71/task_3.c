#include<stdio.h>
int CountSmall(char * str)
{
     static int iCount = 0;

    if(*str == '\0')
    {
        return iCount;
    }
    if(*str >='a' && *str <='z')
    {
        iCount++;
    }
    return CountSmall(str+1);

}

int main()
{
  

    char ch[50];
    int iRet = 0;
    printf("Enter the string:\n");
    scanf("%[^\n]s",ch);
    iRet = CountSmall(ch);
    printf("The smallest digits are:%d\n",iRet);

    return 0;
}