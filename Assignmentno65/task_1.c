#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iValue,int Pos)
{
    UINT iMask = 0;
    UINT iResult = 0;

    if(Pos<1||Pos>32)
    {
        return FALSE;
    }
    iMask = 1<<(Pos-1);
    iResult = iValue & iMask;
    if(iResult == 0)
    {
        return FALSE;
    }
    else
    {
        return TRUE;
    }
    
}

int main()
{
    UINT iNo = 0;
    int iPos  = 0;
    BOOL bRet = FALSE;

    printf("Enter the number:\n");
    scanf("%u",&iNo);

    printf("Enter the Position:\n");
    scanf("%d",&iPos);

    bRet = ChkBit(iNo,iPos);

    if(bRet == TRUE)
    {
        printf("Bit is ON\n");

    }
    else
    {
        printf("Bit is OFF\n");

    }
        
    return 0;
}