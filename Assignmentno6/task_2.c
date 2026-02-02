#include<stdio.h>
#include<stdbool.h>

bool CheakNum(int iNo)
{
    if(iNo>100)
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
    int number =0;
    bool bRet = false;
    printf("Enter the number\n");
    scanf("%d\n",&number);

    bRet = CheakNum(number);
    if(bRet == true)
    {
        printf("The number is greater\n");
    }
    else
    {
        printf("The number is smaller\n");
    }

    return 0;

}