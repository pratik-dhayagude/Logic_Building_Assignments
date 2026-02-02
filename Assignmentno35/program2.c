#include<stdio.h>
int Small(char *str)
{
    int iCnt = 0;
    int iCount = 0;
    while(*str != '\0')
    {
        if(*str>='a'&& *str<= 'z')
        {
            iCount++;
        }
         str++;

    }
   
    return iCount;
}
int main()
{
    char Arr[20];

    int iRet = 0;

    printf("Enter they Element : ");
    scanf("%[^'\n']s",&Arr);

    iRet = Small(Arr);
    printf("Small Elements Will be :%d",iRet);


}