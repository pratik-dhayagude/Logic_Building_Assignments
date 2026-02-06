#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 2

BOOL ChkBit(UINT iValue)
{
    UINT iMask = 1<<14;
    if((iValue&iMask)==iMask)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }

}
int main()
{
    UINT iNo=0;
    BOOL bRet = FALSE;

    printf("Enter they number:");
    scanf("%u",&iNo);
    bRet = ChkBit(iNo);
    if(bRet == TRUE)
    {
        printf("15th bit is on\n");

    }
    else
    {
        printf("15th bit is off\n");
    }
    return 0;


}