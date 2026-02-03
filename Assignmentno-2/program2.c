#include<stdio.h>

void DisplayStars(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo>0)
    {
        printf("*");
        iNo--;
    }

}

int main()
{
    int iValue=0;

    printf("Enter they Number\n");
    scanf("%d",&iValue);

    return 0;
}