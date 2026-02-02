#include<stdio.h>

int DisplayDiffOddEven(int iNo)
{
    int iCnt = 0;
    int iSumEven = 1;
    int iSumOdd = 1;
    if(iNo<0)
    {
        iNo = -iNo;
    }
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if((iCnt%2)==0)
        {
            iSumEven = iSumEven*iCnt;
        }
        else 
        {
            iSumOdd =  iSumOdd*iCnt;
        }
    }
    return iSumEven-iSumOdd;
}

int main()
{
    int Num=0;
    int iRet = 0;
    printf("Enter the number:\n");
    scanf("%d",&Num);
    iRet = DisplayDiffOddEven(Num);
    printf("Factorial difference is :%d\n",iRet);

    return 0;
}