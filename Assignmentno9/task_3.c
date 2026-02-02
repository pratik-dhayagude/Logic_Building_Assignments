#include<stdio.h>
int DisplayEven(int iNo)
{
    int iCnt = 0;
    int iSum = 1;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if((iCnt%2)==0)
        {
            iSum=iSum*iCnt;  
        }
    }
    return iSum;
}

int main()
{
    int Num =0;
    int iRet =0;

    printf("Enter the number :\n");
    scanf("%d",&Num);
    iRet = DisplayEven(Num);
    printf("The Even factorial is :%d\n",iRet);

    return 0;
}