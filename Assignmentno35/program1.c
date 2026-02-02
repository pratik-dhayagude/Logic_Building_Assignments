#include<stdio.h>
int Count(char *str)
{
    int iCnt = 0;
    int iCount = 0;

    
    while(*str != '\0')
    {
        if(*str>='A'&&*str <='Z')
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
    printf("Enter they Elements :");
    scanf("%[^'\n']s",Arr);
     iRet = Count(Arr);
     printf("Capital Numbers Are : %d",iRet);

    return 0;

}