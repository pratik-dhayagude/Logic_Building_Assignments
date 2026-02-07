#include<stdio.h>
int Sum(int iValue)
{
   static int iSum = 1;
   if(iValue == 0)
   {
     return iSum;
   }

   iSum = iSum * (iValue%10);
   return Sum(iValue/10);

}

int main()
{
    int iNo = 0;
    int iRet = 0;
    printf("Enter the number:\n");
    scanf("%d",&iNo);

    iRet = Sum(iNo);
    printf("The Sum are:%d\n",iRet);      


    return 0;
}