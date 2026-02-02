#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool Cheak(int Arr[],int iLength)
{
    int iCnt=0;
    
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int iSize = 0,iCnt=0,iRet = 0;
    int*p=NULL;
    bool bRet=false;
    printf("Enter the number of elements that you have:\n");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize*sizeof(int));

    if(p==NULL)
    {
        printf("The memory is not allocated\n");
        return -1;
    }
    printf("Enter the number:%d\n",iSize);
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("Enter the numbers:%d\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    bRet = Cheak(p,iSize);

    if(bRet == true)
    {
        printf("11 is preasent\n");
    }
    else
    {
        printf("11 is not preasent\n");
    }


    return 0;
}