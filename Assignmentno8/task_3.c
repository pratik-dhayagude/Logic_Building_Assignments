#include<stdio.h>

int DisplayFact(int iNum)
{
    int iCnt = 0;
    int Fact = 1;
    for(iCnt = iNum;iCnt>=1;iCnt--)
    {
        Fact = Fact * iCnt;
    }
    return Fact;
}

int main()
{
    int iNo = 0;
    int iRet = 0;
    printf("Enter the number : \n");
    scanf("%d",&iNo);
    iRet = DisplayFact(iNo);
    printf("The factorial of given number is :%d\n",iRet);

    return 0;
}