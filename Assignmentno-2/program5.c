#include<stdio.h>
#include<stdbool.h>


bool DisplayEvenOdd(int iNo)
{
    if((iNo%2)==0)
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
    int iValue = 0;
    bool bRet = false;

    printf("Enter they number\n");
    scanf("%d",&iValue);

    bRet = DisplayEvenOdd(iValue);
    if(bRet == true)
    {
        printf("The Number is even\n");

    }
    else
    {
        printf("The number will be odd\n");
    }

    return 0;
}