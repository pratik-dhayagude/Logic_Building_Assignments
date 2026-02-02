#include<stdio.h>
#include<stdlib.h>
void Display(int Arr[],int iLength)
{
    int iCnt=0;
    printf("The number which is multiple by 11 is\n");
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]%11==0)
        {
            printf("%d\t",Arr[iCnt]);
        }
    }
}
int main()
{
    int iSize=0,iCnt=0;
    int *p=NULL;
    printf("Enter the size:\n");
    scanf("%d",&iSize);
    p = (int*)malloc(iSize*sizeof(int));

    if(p==NULL)
    {
        printf("The memory is not allocated\n");
        return -1;
    }
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("Enter the number:%d\n",iCnt+1);
        scanf("%d",&p[iCnt]);

    }
    Display(p,iSize);
    free(p);
    
    return 0;
}
