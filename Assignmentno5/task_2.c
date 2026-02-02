#include<stdio.h>
int CheakMax(int iNo1,int iNo2)
{

    if(iNo1>iNo2)
    {
        return iNo1;
    }
    else
    {
        return iNo2;
    }
}

int main()
{
    int iValue1 =0;
    int iValue2 = 0;
    int Result = 0;

    printf("Enter the first number \n");
    scanf("%d",&iValue1);

    printf("Enter the second number\n");
    scanf("%d",&iValue2);

    Result = CheakMax(iValue1,iValue2);

    printf("the maximum number will be :%d\n",Result);

    return 0;
}