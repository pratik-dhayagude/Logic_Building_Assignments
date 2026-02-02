#include<stdio.h>

int DisplayMeter(int Num)
{
    int Sum = 0;
    Sum = Num*1000;
    return Sum;
}

int main()
{
    int iNo = 0;
    int iRet = 0;

    printf("Enter the number :\n");
    scanf("%d",&iNo);
    iRet = DisplayMeter(iNo);
    printf("The Distance in meter will be :%d\n",iRet);
    return 0;
}