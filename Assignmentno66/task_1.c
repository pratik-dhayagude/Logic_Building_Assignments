#include<stdio.h>

typedef unsigned int UINT;
int CountOne(UINT iValue)
{
    int iCount=0;
    while(iValue!=0)
    {
       iValue = iValue & (iValue-1);
       iCount++;
    }
    return iCount;
}
int main()
{
    UINT iNo = 0;
    UINT iRet = 0;

    printf("Enter the number:\n");
    scanf("%u",&iNo);

    iRet = CountOne(iNo);
    printf("The Count is:%u\n",iRet);

    return 0;
}