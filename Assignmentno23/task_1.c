#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool Display(int Arr[],int iLength,int iNo)
{
  int iCnt=0;
  for(iCnt=0;iCnt<iLength;iCnt++)
  {
    if(Arr[iCnt]==iNo)
    {
        return true;
        
    }
  }
  return false;
}

int main()
{
    int iSize=0,iCnt=0,iRet=0,iValue=0;
    int *ptr=NULL;
    bool bRet = false;
    printf("Enter the number that you want to allocate:\n");
    scanf("%d",&iSize);

    printf("Enter the number:\n");
    scanf("%d",&iValue);

    ptr= (int*)malloc(iSize*sizeof(int));

    if(ptr==NULL)
    {
        printf("memory is not allocated\n");
        return -1;

    }

    printf("Enter the numbers:%d\n",iSize);
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("Enter the number:%d\n",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    bRet = Display(ptr,iSize,iValue);

    if(bRet == true)
    {
        printf("The number is preasent\n");
    }
    else
    {
        printf("The number is not preasent\n");
    }
    free(ptr);


    return 0;
}
