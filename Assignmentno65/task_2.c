#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;



UINT OffBit(UINT iValue,int Pos)
{
   UINT iMask=0x00000001;
   UINT iResult =0;

   iMask=iMask<<(Pos-1);
   iResult= iValue & (~iMask);
   return iResult;
  
    
}

int main()
{
    UINT iNo = 0;
    int iPos  = 0;
    UINT iRet = 0;

    printf("Enter the number:\n");
    scanf("%u",&iNo);

    printf("Enter the Position:\n");
    scanf("%d",&iPos);

    iRet = OffBit( iNo , iPos);
    printf("Modified Number is: %u\n",iRet);
        
    return 0;
}