#include<stdio.h>

typedef unsigned int UINT;
void CountSame(UINT iValue1,UINT iValue2)
{
    UINT iResult = iValue1&iValue2;
    int iPos = 1;
    for(iPos = 1;iPos<=32;iPos++)
    {
        if((iResult&1)==1)
        {
            printf("%d\t",iPos);
        }
        iResult = iResult>>1;
        if(iResult==0)
        {
            break;
        }
    }
    printf("\n");
   
}
int main()
{
    UINT iNo1 = 0;
    UINT iNo2 = 0;
    UINT iRet = 0;

   
    printf("Enter the number:\n");
    scanf("%u",&iNo1);

    printf("Enter the number:\n");
    scanf("%u",&iNo2);

    CountSame(iNo1,iNo2);

    

    return 0;
}