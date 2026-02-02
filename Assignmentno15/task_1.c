#include<stdio.h>

int DisplayEven(int iNo)
{
    int iCount=0;
    int iDigit =0;
    if(iNo<0)
    {
        iNo=-iNo;
    }

    while(iNo!=0)
    {
        iDigit = iNo%10;
     
         if((iDigit%2)==0)
         {
            iCount++;
         }
            iNo = iNo/10;
    }
    return iCount;

}

int main()
{
    int iValue = 0;
    int iRet =0;
    printf("Enter the number :\n");
    scanf("%d",&iValue);

    iRet = DisplayEven(iValue);

    printf("The Eeven numbers are :%d\n",iRet);



    return 0;
}