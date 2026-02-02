#include<stdio.h>

int Display(int Num)
{
   int iNo = 70;
   int iCnt =0;
   int iSum = 0;
   for(iCnt=1;iCnt<=Num;iCnt++)
   {
     iSum = iCnt*iNo;
   }
   return iSum;
    
}

int main()
{
    int iNo =0;
    int iRet = 0;


    printf("Enter the number :\n");
    scanf("%d",&iNo);
    Display(iNo);
    iRet = Display(iNo);

    printf("The value in INR is :%d\n",iRet);
    return 0;
}