#include<stdio.h>
#include<stdlib.h>
int Difference(int Arr[],int iLength)
{
    int iCnt=0;
    int iCountLarge=Arr[0];
    int iCountSmall=Arr[0];
    for(iCnt=1;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]>iCountLarge)
        {
           iCountLarge=Arr[iCnt];
        
        }
        if(Arr[iCnt]<iCountSmall)
        {
          iCountSmall=Arr[iCnt];
            
        }
    }
    return (iCountLarge-iCountSmall);
}

int main()
{
    int iSize=0,iCnt=0,iRet = 0;

    int *p=NULL;
    p = (int*)malloc(iSize*sizeof(int));
    printf("Enter the number:\n");
    scanf("%d",&iSize);
    if(p==NULL)
    {
        printf("The memory will not succesfully allocated\n");
        return -1;
    }
    printf("Enter the numberss:\n",iSize);
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("Enter the number:%d\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    iRet = Difference(p,iSize);
    printf("The difference is%d\n",iRet);
    return 0;
}