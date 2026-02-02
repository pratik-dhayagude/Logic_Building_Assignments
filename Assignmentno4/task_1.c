#include<stdio.h>
int MulFact(int iNo)
{
    int Mult = 1;
    int iCnt = 0;
    if(iNo<0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <= iNo/2 ;iCnt++)
    {
        if((iNo % iCnt) == 0)
         {
            Mult = Mult * iCnt;
         }

    }
    return Mult;

}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter they number\n");
    scanf("%d",&iValue);

    iRet = MulFact(iValue);

    printf("%d",iRet);


    return 0;
}