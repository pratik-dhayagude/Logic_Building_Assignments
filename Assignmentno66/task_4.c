#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iValue,int Pos1,int Pos2)
{
    UINT iMask1 = 1<<(Pos1-1);
    UINT iMask2 = 1<<(Pos2-1);

    UINT iMask=iMask1|iMask2;
    if((iValue & iMask)!=0)
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
    int iPos1 = 0;
    int iPos2 = 0;
    BOOL bRet = FALSE;

    printf("Enter the number:\n");
    scanf("%u",&iNo);

    printf("Enter the first position:\n");
    scanf("%d",&iPos1);

    printf("Enter the second position:\n");
    scanf("%d",&iPos2);

    bRet = ChkBit(iNo,iPos1,iPos2);
    if(bRet == TRUE)
    {
        printf("bit is ON\n");
    }
    else
    {
        printf("bit is OFF\n");
    }

    return 0;


}

