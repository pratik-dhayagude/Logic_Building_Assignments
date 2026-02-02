#include<stdio.h>
#include<stdlib.h>
int DifferenceEvenOdd(int Arr[],int iLength)
{
    int iCnt = 0,iCountEven=0,iCountOdd=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if((Arr[iCnt]%2)==0)
        {
            iCountEven++;
        }
        else
        {
            iCountOdd++;
        }
    }
    return (iCountEven-iCountOdd);
}

int main()
{
    int iSize=0,iRet=0,iCnt=0;
    int *p =NULL;
    printf("Enter the number of elements:");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize*sizeof(int));

   

    if(p == NULL)
    {
        printf("The memory is not allocated\n");
        return -1;
    }

    printf("Enter the elements:%d",iSize);

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("Enter the number of elements:%d\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    iRet = DifferenceEvenOdd(p,iSize);
    printf("The result will be:%d\n",iRet);
    free(p);
    return 0;

}