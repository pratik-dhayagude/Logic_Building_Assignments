#include<stdio.h>
#include<stdbool.h>
bool CheakCapital(char cValue)
{
    while(cValue != '\0')
    {
        if(cValue>='A'&&cValue<='Z')
        {
            return true;
        }
        else
        {
            return false;

        }
    }
}


int main()
{
    char ch ='\0';
    bool bRet = false;

    printf("Enter they character : ");
    scanf("%c",&ch);

    bRet = CheakCapital(ch);

    if(bRet == true)
    {
        printf("It is a Capital number : ");
    }
    else 
    {
        printf("It is a Small number : ");
    }
}