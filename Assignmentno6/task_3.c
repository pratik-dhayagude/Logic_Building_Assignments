#include<stdio.h>
#include<stdbool.h>
bool CheakEqual(int iNo1,int iNo2)
{
    if(iNo1 == iNo2)
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
    int number1 ,number2;
    bool bRet = false;

    printf("Enter the two numbers:\n");
    scanf("%d %d",&number1,&number2);

    bRet = CheakEqual(number1 , number2);

    if(bRet == true)
    {
        printf("Numbers are equal\n");
    }
    else
    {
        printf("Numbers are not equal\n");
    }

    return 0;
}