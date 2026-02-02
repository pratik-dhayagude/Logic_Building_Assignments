#include<stdio.h>
#include<stdbool.h>
bool IsDivisibleByFive(int number)
{
    if((number%5)==0)
    {
       printf("The number is divisible by five\n");
    }
    else
    {
       printf("The number is not divisible by five\n");
        
    }
}
int main()
{
    int iNo = 0;
    
    printf("Enter the number :\n");
    scanf("%d",&iNo);
    IsDivisibleByFive(iNo);
    return 0;
}