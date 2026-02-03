#include<stdio.h>
void DisplayNumbers(int iNo,int Frequency)
{
    int iCnt = 0;

    if(Frequency<0)
    {
        Frequency = -Frequency;
    }
    for(iCnt = 0;iCnt<Frequency;iCnt++)
    {
        printf("%d\t",iNo);

    }
}


int main()
{

    int iValue = 0;
    int iCount = 0;

    printf("Enter they first Number \n");
    scanf("%d",&iValue);

    printf("Enter they second number\n");
    scanf("%d",&iCount);

    DisplayNumbers(iValue,iCount);

    return 0;

}