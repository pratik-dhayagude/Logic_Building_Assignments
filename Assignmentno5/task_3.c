#include<stdio.h>
void CheakLeep(int year)
{
    if((year%4)==0)
    {
        printf("The year is leep year\n");

    }
    else
    {
        printf("the yer is not a leep year\n");
    }
}
int main()
{
    int yer;
    printf("Enter the year\n");
    scanf("%d",&yer);

    CheakLeep(yer);
    return 0;
}