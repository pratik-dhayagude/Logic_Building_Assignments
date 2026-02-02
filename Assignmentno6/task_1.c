#include<stdio.h>

int main()
{
    char name[30];

    printf("Enter the full name :\n");
    scanf("%[^\n]s",name);

    printf("Yur Full name is :%s",name);

    return 0;

}