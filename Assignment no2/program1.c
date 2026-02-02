#include<stdio.h>
void Display(int iNo)
{
    int iCnt = 0;
    if(iNo<0)
    {
        iNO = -iNo;
    }
    for(iCnt=0;iCnt<iNo;iCnt++)
    {
        printf("*");
    }
}
int main()
{
    int iValue = 0;
    printf("Enter they number");
    scanf("%d"&iValue);

    return 0;
}
