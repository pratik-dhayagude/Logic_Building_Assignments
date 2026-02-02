#include<stdio.h>
void DisplayShedul(char cDiv)
{
    if(cDiv >= 'a' && cDiv <='z' )
    {
        cDiv = cDiv - 32;
    }
    if(cDiv == 'A')
    {
        printf("shedul will be at 7AM ");
    }
    else if(cDiv == 'B')
    {
        printf("shedul will be at 8.30AM ");
    }
     else if(cDiv == 'C')
    {
        printf("shedul will be at 9.20AM ");
    }
     else if(cDiv == 'D')
    {
        printf("shedul will be at 10.30AM ");
    }

}

int main()
{
    char ch = '\0';

    printf("Enter they Element : ");
    scanf("%c",&ch);

    DisplayShedul(ch);

}