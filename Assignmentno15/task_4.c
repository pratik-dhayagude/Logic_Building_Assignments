#include<stdio.h>

int DisplayEven(int iNo)
{
    int iCount=0;
    int iDigit =0;
    int iSum=1;
    if(iNo<0)
    {
        iNo=-iNo;
    }

    while(iNo!=0)
    {
        iDigit = iNo%10;
        if(iDigit!=0)
        {
          iSum = iSum * iDigit;
        }
        iNo = iNo/10;     
    }
    return iSum;

}

int main()
{
    int iValue = 0;
    int iRet =0;
    printf("Enter the number :\n");
    scanf("%d",&iValue);

    iRet = DisplayEven(iValue);

    printf("The Multiplication are :%d\n",iRet);



    return 0;
}