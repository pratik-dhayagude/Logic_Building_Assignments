#include<stdio.h>
void Display(int iNo)
{
    for(int iCnt = -iNo;iCnt <= iNo ;iCnt ++)
    {
        printf("%d\t",iCnt);

    }
}

int main()
{
    int iValue = 0;
    printf("Enter they number :\n");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;
}