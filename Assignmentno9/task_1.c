#include<stdio.h>

void Display(int Num)
{
    int iCnt = 0;
    for(iCnt=0;iCnt<Num;iCnt++)
    {
        printf("*\t",iCnt);
    }
    for ( iCnt = 0; iCnt < Num; iCnt++)
    {
        printf("#\t",iCnt);
    }
    
}

int main()
{
    int iNo =0;

    printf("Enter the number :\n");
    scanf("%d",&iNo);
    Display(iNo);
    return 0;
}