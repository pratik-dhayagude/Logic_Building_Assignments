#include<stdio.h>

void Pattern(int Row ,int Coloum)
{
    int i = 0;
    int j = 0;

    for(i=1;i<=Row;i++)
    {
        for(j=1;j<=Coloum;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
 

}

int main()
{
    int iValue1=0,iValue2=0;

    printf("Enter the number of rows and coloums:\n");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);
    
    return 0;
}