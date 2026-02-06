#include<stdio.h>


typedef unsigned int UINT;

UINT OffBit(UINT iValue)
{
    UINT iMask = 1<<6|1<<9;
    if((iValue & iMask )==iMask)
    {
        iValue = iValue & (~iMask);

    }
    return iValue;

}
int main()
{

    UINT iNo = 0;
    UINT iRet = 0;
    printf("Enter the number:\n");
    scanf("%u",&iNo);

    iRet = OffBit(iNo);
    printf("Modified number is :%u\n",iRet);

    return 0;
}

