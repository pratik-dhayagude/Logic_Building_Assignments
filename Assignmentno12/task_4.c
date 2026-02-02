#include<stdio.h>

int Print_factors(int iNo)
{
   int iCnt = 0;
   int iSum = 1;
   for(iCnt=1;iCnt<=iNo;iCnt++)
   {
     if((iCnt%2)==0)
     {
        printf("%d\t",iCnt);
        iSum = iSum+iCnt;
     }
   }
   return iSum;

}

int main()
{
    int number;
    int iRet;

    printf("Enter number :\n");
    scanf("%d",&number);

    iRet = Print_factors(number);
    printf("\nThe sum of total factors are :%d\n",iRet);

    return 0;
}