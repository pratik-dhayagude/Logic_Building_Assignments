#include<stdio.h>
int Multiplication(int iNo1,int iNo2,int iNo3)
{
    int iMul= 1;
    int flag = 0;

    if(iNo1 != 0)
    {
        iMul = iMul * iNo1;
        flag = 1;
    }
    if(iNo2 != 0)
    {
        iMul = iMul*iNo2;
        flag = 1;
    }
    if(iNo3 != 0)
    {
        iMul = iMul * iNo3;
        flag = 1;
    }
    if(flag == 0)
    {
        
        return 0;
    }
    return iMul;

}

int main()
{
    int iValue1 = 0, iValue2 =0,iValue3 = 0;
    int iRet = 0;

    printf("Enter they three numbers:\n");
    scanf("%d %d %d",&iValue1,&iValue2,&iValue3);

    iRet = Multiplication(iValue1,iValue2,iValue3);
    printf("The multiplication of three numbers is :%d\n",iRet);

    return 0;
}