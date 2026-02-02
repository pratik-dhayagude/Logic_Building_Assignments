#include<stdio.h>
void Display(int iNum)
{
    int iCnt = 0;
    for(iCnt = 10;iCnt>=1;iCnt--)
    {
        printf("%d\t",iCnt*iNum);
    }
}

int main()
{
    int iNo = 0;

    printf("Enter the number\n");
    scanf("%d",&iNo);

    Display(iNo);

    return 0;
}