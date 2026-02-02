#include<stdio.h>
void CheakPosNev(int iNo)
{
    if(iNo>0)
    {
        printf("the number is positive\n");

    }
    else
    {
        printf("The number is negative\n");
    }
}
int main()
{
    int Number;
    printf("Enter they number\n");
    scanf("%d",&Number);
    CheakPosNev(Number);
    return 0;
}