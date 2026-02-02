#include<stdio.h>
void PrintEven(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1;iCnt<iNo;iCnt++)
    {
        if((iNo%iCnt) == 0 && (iCnt%2)==0)
        {
            printf("%d\t",iCnt);
        }
    }

}

int main()
{

    int iValue = 0;
    printf("Enter they number\n");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}