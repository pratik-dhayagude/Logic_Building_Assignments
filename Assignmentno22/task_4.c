#include<stdio.h>
#include<stdlib.h>
int CountFrequency(int Arr[],int iLength)
{
    int iCnt =0;
    int iCount=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]==11)
        {
            iCount++;
        }
    }
    return iCount;
}

int main()
{
    int iSize =0,iCnt=0,iRet=0;
    int*p=NULL;
    printf("Enter the number of elements:\n");
    scanf("%d",&iSize);
    p=(int*)malloc(iSize*sizeof(int));
    if(p==NULL)
    {
        printf("The memory is not allocated\n");
        return -1;
    }
    printf("Enter the Numbers:%d\n",iSize);
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("Enter the number:%d\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    iRet = CountFrequency(p,iSize);
    printf("The frequency will be:%d",iRet);

    return 0;

}