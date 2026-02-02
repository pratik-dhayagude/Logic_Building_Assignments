#include<stdio.h>
int DisplayOdd(int iNo)
{
    int iCnt = 0;
    int iSum = 1; 
    if(iNo<0)
    {
        iNo = -iNo;
    } 
    for(iCnt = 1;iCnt<=iNo;iCnt++)
    {
        if((iCnt%2)!=0)
        {
            iSum = iSum*iCnt;
        }
    }
    return iSum;
}

int main()
{
    int Num,iRet;
    printf("enter the number:\n");
    scanf("%d",&Num);
    iRet = DisplayOdd(Num);
    printf("The Odd number will be :%d\n",iRet);

    return 0;
}