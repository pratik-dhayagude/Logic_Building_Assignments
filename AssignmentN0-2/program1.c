#include<stdio.h>
void DisplayStars(int iNo)
{
    int iCnt = 0;
    if(iNo<0)
    {
        iNo=-iNo;
    }

    while(iCnt < iNo)
    {
        printf("*");
        iCnt++;
    }
}
int main()
{
    int iValue = 0;

    printf("Enter the number:");
    scanf("%d",&iValue);

    DisplayStars(iValue);
    return 0;

}