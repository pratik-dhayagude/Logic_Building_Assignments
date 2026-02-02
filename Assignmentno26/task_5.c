#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    for( iCnt = 0;iCnt<iNo;iCnt++)
    {
        printf("*\t%d\t#\t",iCnt);
    }

}

int main()
{

    int iValue= 0;
    printf("Enter the number that you want to display:\n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;

}
