#include<stdio.h>

int Display(int iNo1,int iNo2)
{
    int iCnt = 0;
    int iSum = 0;
    if(iNo1<=0||iNo2<=0||iNo1>iNo2)
    {
       return -1;
       
    }
   
    for(iCnt=iNo1;iCnt<=iNo2;iCnt++)
    {
        
        iSum = iSum+iCnt;
    }
    return iSum;
   

}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Enter the starting point :\n");
    scanf("%d",&iValue1);

    printf("Enter the ending point :\n");
    scanf("%d",&iValue2);

    iRet=Display(iValue1,iValue2);

   if(iRet == -1)
   {
      printf("Invalid range\n");

   }
   else 
   {
     printf("Addition is :%d\n",iRet);
   }
   

    

    return 0;
}