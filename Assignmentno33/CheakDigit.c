#include<stdio.h>
#include<stdbool.h>
bool CheakDigit(char cValue)
{
   while(cValue != '\0')
   {

   
   if(cValue>= '0' && cValue<='9')
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
    char ch = '\0';

    bool bRet = false;

    printf("Enter they character :");
    scanf("%c",&ch);

    bRet = CheakDigit(ch);
    if(bRet == true)
    {
        printf("It is a  digit ");

    }
    else
    {
       printf("It is  not  Digit ");  
    }


}