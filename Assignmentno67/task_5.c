#include<stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT iValue)
{
    UINT iMask = 0x0F;
    return (iValue | iMask);

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

