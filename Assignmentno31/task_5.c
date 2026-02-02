#include<stdio.h>
void Pattern(int iRow , int iColoum)
{
    int i = 0,j=0;
    for(i = 1;i<=iRow;i++)
    {
        for(j=1;j<=iColoum;j++)
        {
          if(j>=i)
          {
            printf("%d",j);
          }
            
        }
        printf("\n");
    }
}
int main()
{
    int iValue1=0,iValue2=0;
    printf("Enter they number of rows and coloum:\n");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);
    return 0;
}