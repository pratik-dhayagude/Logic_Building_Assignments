#include<stdio.h>
void CheakEvenOdd(int iNo)
{
    if((iNo%2)==0)
    {
        printf("They number will be even\n");
    }
    else
    {
        printf("They number will odd\n");
    }
}

int main()
{
    int iValue = 0;
    printf("Enter they number\n");
    scanf("%d",&iValue);

    CheakEvenOdd(iValue);


    return 0;
}