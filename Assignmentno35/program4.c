#include<stdio.h>
#include<stdbool.h>
bool CheakVowel(char *str)
{
    while(*str != '\0')
    {
        if(*str == 'a'|| *str == 'e'||*str == 'i'|| *str == 'o'||*str == 'u'||
          *str == 'A'|| *str == 'E'||*str == 'I'|| *str == 'O'||*str == 'U')
        {
           return true;
           
        }
        str++;
       

    }
    return false;
    
}

int main()
{
    char Arr[20];
     bool bRet = false;
    printf("Enter They Element : ");
    scanf("%[^'\n']s",Arr);

    bRet = CheakVowel(Arr);
    if(bRet == true)
    {
        printf("contains Volwel ");
    }
    else
    {
        printf("It is not contain vowel :");
    }
    return 0;

}