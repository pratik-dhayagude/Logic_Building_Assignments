#include<stdio.h>
#include<stdbool.h>

bool CheakAlpha(char cValue)
{
    while(cValue != '\0')
    {
        if((cValue >='a')&&(cValue <='z')||(cValue >='A') && (cValue <='Z'))
        {
            return true ;
        }
        else
        {
           return false;
        }
    }
}

int main()
{
    char ch = '\0';
    bool bRet = false;

    printf("Enter they character : ");
    scanf("%c",&ch);
    
    bRet = CheakAlpha(ch);
    if(bRet == true )
    {
        printf("it is a character");

    }
    else
    {
        printf("it is not a character");
    }

}


 

 