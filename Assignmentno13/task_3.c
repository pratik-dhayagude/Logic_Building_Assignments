#include<stdio.h>
void Limit(int iNo)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if((iCnt%2)!=0)
        {
           printf("%d\t",iCnt);
        }
       
    }
}

int main()
{
    int Number=0;
    printf("Enter the number:\n");
    scanf("%d",&Number);
    Limit(Number);

    return 0;
}