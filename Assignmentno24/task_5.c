#include<stdio.h>
#include<stdlib.h>
void DisplayThree(int Arr[],int iLength)
{
    int iCnt=0;
    int iSum =0;
    int iNo=0;
    int iDigit=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        iNo=Arr[iCnt];
        while(iNo!=0)
        {
            iDigit = iNo%10;
            iSum = iSum+iDigit;
            iNo = iNo/10;
        }
        printf("%d",iSum);
    }
    
    
    
}

int main()
{
    int iCnt=0,iSize=0;
    int *p = NULL;
    printf("Enter the number that you want to allocate:\n");
    scanf("%d",&iSize);
    p = (int*)malloc(iSize*sizeof(int));

    if(p==NULL)
    {
        printf("The memory is not succesfully allocated\n");
        return -1;
    }
    printf("Enter the number:%d\n",iSize);

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("Enter the number%d\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    DisplayThree(p,iSize);

    free(p);

    return 0;
}