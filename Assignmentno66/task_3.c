#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iValue)
{
    UINT iMask = 0;
    UINT iResult = 0;

    iMask=((1<<8)|(1<<11));
    iResult = iValue & iMask;
    if(iResult !=0)
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
        printf("The 9th and 12th bit is ON\n");
    }
    else
    {
        printf("The 9th and 12th bit is OFF\n");

    }



    
        
    return 0;
}