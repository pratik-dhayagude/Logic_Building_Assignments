#include<stdio.h>
int FactDiff(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    int Nonfact = 0;

    if(iNo<0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1;iCnt<iNo;iCnt++ )
    {
        if((iNo%iCnt) == 0)
        {
           iSum = iSum+iCnt;
           
        }
        else
        {
            Nonfact = Nonfact+iCnt;
        }
    }
    return (iSum-Nonfact);

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter they number\n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("%d\t",iRet);

    return 0;
}