#include<stdio.h>

void Pattern(int iRow,int iColoum)
{
    int i = 0,j=0;
    char ch = '\0';
    
    for(i = 1;i<=iRow;i++)
    {
        if(i%2!=0)
        {
            ch = 'a';
            for(j = 1;j<=iColoum;j++)
            {
                printf("%c",ch);
                ch++;
            }
            
        }
        else
        {
               for(j = 1; j<=iColoum;j++)
                {
                    printf("%d",j);
                    
                
                }
                
        } 
        printf("\n");
    }

}

int main()
{

    int iValue1 = 0,iValue2=0;

    printf("Enter the Row:\n");
    scanf("%d",&iValue1);

    printf("Enter the Coloum:\n");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);
    
    return 0;
}