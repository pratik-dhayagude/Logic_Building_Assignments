#include<stdio.h>
#include<stdbool.h>
bool CheakSmall(char cValue )
{
    if((cValue >= 'a')&&(cValue <= 'z'))
    {
        return true;
    }
    else
    {
        return false;
    }

}
int main()
{
    char ch = '\0';
    bool bRet = false;

    printf("Emter they Element:");
    scanf("%c",&ch);

    bRet = CheakSmall(ch);
    if(bRet == true )
    {
        printf("it is a Small case ");

    }
    else
    {
        printf("it is not a Small case ");
    }



}