#include<stdio.h>
#include<stdlib.h>

int Display(int Arr[],int iLength,int Start,int End)
{
   
   int iCnt=0;
   for(iCnt=0;iCnt<iLength;iCnt++)
   {
     if(Arr[iCnt]>=Start&&Arr[iCnt]<=End)
     {
         printf(Arr[iCnt],"%d");
     }
   }
   return iCnt;
    
}

int main()
{
    int iSize = 0, iCnt=0,iRet = 0,iValue1=0,iValue2=0;
    int *p=NULL;
    printf("Enter the number of size that you want:\n");
    scanf("%d",&iSize);

     printf("Enter the number  you want:\n");
    scanf("%d",&iValue1);

     printf("Enter the number that you want:\n");
    scanf("%d",&iValue2);

    p = (int*)malloc(iSize*sizeof(int));

    if(p == NULL)
    {
        printf("The size will be not allocated:\n");
        return -1;
    }

    printf("Enter the Numbers:%d\n",iSize);

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("Enter the numbers:%d\n",iSize);
        scanf("%d",&p[iCnt]);
    }

    iRet = Display(p,iSize,iValue1,iValue2);

    printf("The range will be:\n",iRet);

}