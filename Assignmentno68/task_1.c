#include<stdio.h>

void Display(int iNo)
{
    static int i = 1;
    if(i<=iNo)
    {
        printf("*\t");
        i++;
        Display(iNo);
    }

}
int main()
{
    Display(4);

    return 0;
}