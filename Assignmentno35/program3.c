#include<stdio.h>
int CountFrequency(char *str)
{
    
    int iSmall = 0,iCapital = 0;
    
    while(*str != '\0')
    {
        if(*str>='a'&&*str<='z')
        {
            iSmall++;
        }
        else if(*str>='A'&&*str<='Z')
        {
            iCapital++;
        }

        str++;
    }
    return iSmall - iCapital;
}
int main()
{
    char Arr[20];

    int iRet = 0;

    printf("Enter They Elements :");
    scanf("%[^'\n']s",&Arr);

    iRet = CountFrequency(Arr);
    printf("The Frequency of Small Character Will be : %d",iRet);
}