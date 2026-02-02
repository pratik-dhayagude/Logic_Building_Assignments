#include<stdio.h>
int Limit(int iNo)
{
    int iCnt=0;
    int iSum = 0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
      printf("%d\t",iCnt); 
      iSum = iSum+iCnt; 
    }
    return iSum;
}

int main()
{
    int Number=0;
    printf("Enter the number:\n");
    scanf("%d",&Number);
    int iRet =Limit(Number);
    printf("\nThe sum of all natural numbers are :%d\n",iRet);

    

    return 0;
}