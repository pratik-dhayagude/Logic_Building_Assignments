#include<stdio.h>

int Print_factors(int iNo)
{
    int iCnt =0;
    int iCount =0;
    for(iCnt=1;iCnt<=iNo/2;iCnt++)
    {
        if((iNo%iCnt)==0)
        {
          printf("%d\t",iCnt);
         
        }
         iCount++;
   }
   return iCount;

}

int main()
{
    int number;
    int iRet;

    printf("Enter number :\n");
    scanf("%d",&number);

    iRet = Print_factors(number);
    printf("\nThe total numbers of factor are :%d\n",iRet);

    return 0;
}