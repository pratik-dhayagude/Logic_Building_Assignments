#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 2
BOOL ChkBit(UINT iValue)
{
    UINT iMask = (1<<4) | (1<<17);

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
    UINT iNo = 0;
    BOOL bRet = FALSE;

    printf("Enter the number:\n");
    scanf("%u",&iNo);

    bRet = ChkBit(iNo);

    if(bRet == TRUE)
    {
        printf("The 5th & 18th bit is ON\n");
    }
    else
    {
        printf("The 5th & 18th bit is OFF\n");
    }

    return 0;
}