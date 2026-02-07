#include<stdio.h>
int factorial(int iValue)
{
   if(iValue == 0)
   {
     return 1;
   }

   return iValue * factorial(iValue -1);

}

int main()
{
    int iNo = 0;
    int iRet = 0;
    printf("Enter the number:\n");
    scanf("%d",&iNo);

    iRet = factorial(iNo);
    printf("The Factorial are:%d\n",iRet);      


    return 0;
}