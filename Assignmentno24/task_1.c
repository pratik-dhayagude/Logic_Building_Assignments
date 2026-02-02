#include<stdio.h>
#include<stdlib.h>
int Maximum(int Arr[],int iLength)
{
    int iCnt=0;
    int Maximum = Arr[0];
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]>Maximum)
        {
            Maximum = Arr[iCnt];
        }
    }
    return Maximum;
}

int main()
{
    int iCnt =0,iSize=0,iRet =0;
    int *p =NULL;

    printf("Enter the number:\n");
    scanf("%d",&iSize);

    p= (int*)malloc(iSize*sizeof(int));

    if(p == NULL)
    {
        printf("The memory is not allocated\n");
        return -1;
    }

    printf("Enter number of elements:%d\n",iSize);
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("Enter the number:%d\n",iCnt+1);
        scanf("%d",&p[iCnt]);

    }
    iRet = Maximum(p,iSize);
    printf("The maximum number is:%d",iRet);
    return 0;
}