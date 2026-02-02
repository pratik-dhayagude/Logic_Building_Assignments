#include<stdio.h>
#include<stdlib.h>
int Difference(int Arr[],int iLength)
{
    int iCnt=0;
    int iSumEven = 0;
    int iSumOdd=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if((Arr[iCnt]%2)==0)
        {
            iSumEven = iSumEven+Arr[iCnt];
        }
        else
        {
            iSumOdd = iSumOdd+Arr[iCnt];
        }

    }
    return (iSumEven-iSumOdd);
}

int main()
{
    int iCnt=0,iSize=0,iRet=0;
    int *p=NULL;

    printf("Enter the number:\n");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize*sizeof(int));
 
    if(p==NULL)
    {
        printf("The size will not allocated:\n");
        return -1;
    }
    printf("Enter the numbers:%d\n",iSize);

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("Enter the number:%d\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    iRet = Difference(p,iSize);
    printf("The difference is:%d\n",iRet);

    return 0;
}