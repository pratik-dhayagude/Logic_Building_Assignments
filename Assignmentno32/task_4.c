#include<stdio.h>
void Pattern(int Row,int Coloum)
{
    int i = 0;
    int j = 0;
    for(i = 1;i<=Row;i++)
    {
        for(j=1;j<=Coloum;j++)
        {
           if(i==1 || i==Row ||j==1||j==Coloum||i+j == Coloum+1)
           {
            printf("*");
           }
           else if(i == j || j<=Coloum-i)
           {
            printf("#");   
           }
           else
           {
            printf("$");
           }

        }
        printf("\n");
    }
}

int main()
{
    int iValue1=0,iValue2=0;
    printf("Enter the number of rows and coloum\n");
    scanf("%d %d",&iValue1,&iValue2);
    Pattern(iValue1,iValue2);
    return 0;
}