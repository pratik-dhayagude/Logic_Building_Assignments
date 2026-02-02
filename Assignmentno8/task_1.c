#include<stdio.h>
void Num(int iNo)
{
    if(iNo < 50)
    {
        printf("The Number is small\n");

    }
    else if(iNo>50 && iNo<100)
    {
        printf("The number is medium\n");

    }
    else 
    {
        printf("The number is large\n");
    }
}

int main()
{
    int Number = 0;
    printf("Enter the number :\n");
    scanf("%d",&Number);
    Num(Number);

    return 0;
}