#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 2
BOOL ChkBit(UINT iValue)
{
    UINT iMask = (1<<6)|(1<<14)|(1<<20)|(1<<27);

    UINT Result =0;

    Result = iValue&iMask;

    if(Result==iMask)
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
        printf("The 7th & 15th & 21th , 28th bit is ON\n");
    }
    else
    {
        printf("The 7th & 15th & 21th , 28th bit is OFF\n");
       
    }

    return 0;
}