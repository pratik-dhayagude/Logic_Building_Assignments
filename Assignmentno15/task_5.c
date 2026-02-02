#include<stdio.h>

int DisplayEven(int iNo)
{
    int iCount=0;
    int iDigit =0;
    int iEvenSum=0;
    int iOddSum =0;
    if(iNo<0)
    {
        iNo=-iNo;
    }

    while(iNo!=0)
    {
        iDigit = iNo%10;
        if((iDigit%2)==0)
        {
          iEvenSum = iEvenSum + iDigit;
        }
        else if((iDigit%2)!=0)
        {
          iOddSum = iOddSum + iDigit;
        }
        iNo = iNo/10;     
    }
    return (iEvenSum-iOddSum);

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