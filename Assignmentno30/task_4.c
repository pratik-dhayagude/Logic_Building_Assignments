#include<stdio.h>

void Pattern(int iRow,int iColoum)
{
    int i =0,j=0;

    for(i=1;i<=iRow;i++)
    {
        for(j=1;j<=iColoum;j++)
        {
           if(i==1||i==iRow||j==1||j==iColoum)
           {
             printf("*");
           }
           else
           {
            printf("@");
           }
        }
        printf("\n");
    }

}

int main()
{
    int iValue1=0,iValue2=0;
    printf("Enter the number of rows:\n");
    scanf("%d",&iValue1);

     printf("Enter the number of Coloum:\n");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);


    return 0;
}