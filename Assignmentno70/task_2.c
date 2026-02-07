#include<stdio.h>
int Addition(int iValue)
{
     static int iSum = 0;
    if(iValue == 0)
    {
        return iSum;
    }

    iSum = iSum + (iValue%10);

    return Addition(iValue/10);


}

int main()
{
    int iNo = 0;
    int iRet = 0;
    printf("Enter the number:\n");
    scanf("%d",&iNo);
    iRet = Addition(iNo);
    printf("The addition is:%d\n",iRet);

    return 0;
}