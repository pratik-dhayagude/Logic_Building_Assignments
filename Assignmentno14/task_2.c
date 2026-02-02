#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
    int iCnt = 0;
    int iDigit = 0; 
    while(iNo!=0)
    {
        iDigit = iNo%10;

        if(iDigit==0)
        {
            return TRUE;
        }
        iNo=iNo/10;
        
    }
    return FALSE;

}

int main()
{
    int iValue =0;
    BOOL bRet = FALSE;

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if(bRet == TRUE)
    {
        printf("It contains zero\n");
    }
    else
    {
        printf("It is not contain zero\n");
    }
    return 0;
}