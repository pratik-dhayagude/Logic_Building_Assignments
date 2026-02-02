#include<stdio.h>
#include<stdlib.h>

int Index(int Arr[],int iLength,int iNo)
{
    int iCnt=0;
    int ipos = -1;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
           ipos = iCnt;
        }
    }
    return ipos;
}


int main()
{
    int iSize=0,iCnt=0,iRet=0,iValue=0;
    int *p=0;
    printf("Enter the size that you want to allocated:\n");
    scanf("%d",&iSize);


    printf("Enter the number \n");
    scanf("%d",&iValue);

    p= (int*)malloc(iSize*sizeof(int));

    if(p==NULL)
    {
        printf("The size will be not allocated\n");
        return -1;
    }

    printf("Enter the Numbers:%d\n",iSize);

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("Enter the Elements:%d\n",iCnt+1);
        scanf("%d",&p[iCnt]);

    }
    iRet = Index(p,iSize,iValue);

    printf("The index will be :%d\n",iRet);




    return 0;
}