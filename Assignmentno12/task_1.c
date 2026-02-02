#include<stdio.h>

void Print_factors(int iNo)
{
    int iCnt =0;
    for(iCnt=1;iCnt<=iNo/2;iCnt++)
    {
        if((iNo%iCnt)==0)
        {
          printf("%d\t",iCnt);
        }
   }

}

int main()
{
    int number;

    printf("Enter number :\n");
    scanf("%d",&number);

    Print_factors(number);

    return 0;
}