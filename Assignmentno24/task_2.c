#include<stdio.h>
#include<stdlib.h>
int SmallDisplay(int Arr[],int iLength)
{
    int iCnt=0;
    int Min =Arr[0];
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]<Min)
        {
            Min = Arr[iCnt];

        }
    }
    return Min;
}

int main()
{
    int iCnt = 0,iSize=0,iRet =0;
    int *p = NULL;
    printf("Enter the number:\n");
    scanf("%d",&iSize);
    p = (int*)malloc(iSize*sizeof(int));
    if(p==NULL)
    {
        printf(" memory is not succesfully allocated:" );
        return -1;
    }
    printf("Enter the number of elements:%d\n",iSize);
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("Enter the elemrnt:%d\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    iRet = SmallDisplay(p,iSize);
    printf("The minimum number is :%d\n",iRet);

    return 0;
}