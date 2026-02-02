#include<stdio.h>
#include<stdlib.h>

int Divisible(int Arr[],int iLength)
{
    int iCnt=0;
    int iCount = 0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if((Arr[iCnt]%5)==0)
        {
           printf("%d\t",Arr[iCnt]);
           iCount++;
        }
    }
    return iCount;
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
    iRet = Divisible(p,iSize);
    printf("The numbers is:%d\n",iRet);
    free(p);

    return 0;
}