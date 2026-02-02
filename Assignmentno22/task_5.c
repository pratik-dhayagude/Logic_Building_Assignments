#include<stdio.h>
#include<stdlib.h>
int Frequency(int Arr[],int iLength,int iNo)
{
    int iCnt=0;
    int iCount=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
            iCount++;
        }
    }
    return iCount++;
}

int main()
{
    int iSize =0,iCnt=0,iRet=0,iValue=0;
    int *p = NULL;
    printf("Enter the number that you want to allocate memory:\n");
    scanf("%d",&iSize);

    printf("Enter the number that you want to calculate the frequency:\n");
    scanf("%d",&iValue);

    p = (int *)malloc(iSize*sizeof(int));
    if(p==NULL)
    {
        printf("the memory get not allocated\n");
        return -1;
    }

    printf("Enter the number:%d\n",iSize);
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("Enter the number:%d\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    iRet = Frequency(p,iSize,iValue);
    printf("The frequency is:%d\n",iRet);

    return 0;
}