#include<stdio.h>

int LargestDigit(int iValue)
{
     int iMax = 0;
     int iDigit = 0;

    if(iValue == 0)
    {
        return iMax;
    }
    iDigit = iValue %10;
    iMax = LargestDigit(iValue/10);
    if(iDigit > iMax)
    {
        return iDigit;
    }
    else
    {
        return iMax;
    }

}
int main()
{
    int iNo = 0 ;
    int iRet = 0;
    printf("Enter the number:\n");
    scanf("%d",&iNo);

    iRet = LargestDigit(iNo);
    printf("The largest digit is :%d\n",iRet);

    return 0;
}