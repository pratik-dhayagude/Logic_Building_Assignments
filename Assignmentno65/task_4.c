#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;



UINT OffBit(UINT iValue)
{
   UINT iMask=0xF000000F;
   UINT iResult = iValue^iMask;
   return iResult; 
}

int main()
{
    UINT iNo = 0;
    
    UINT iRet = 0;

    printf("Enter the number:\n");
    scanf("%u",&iNo);

    iRet = OffBit(iNo);
    printf("Modified Number is: %u\n",iRet);
        
    return 0;
}