#include<stdio.h>
int CheakMax(int a,int b,int c)
{
    if(a>b && a>c)
    {
        return a;
    }
    else if(b>c&&b>a)
    {
        return b; 
    }
    else
    {
        return  c;
    }
}

int main()
{
    int iNo1,iNo2,iNo3;
    int Maximum;
    printf("Enter they numbers :\n");
    scanf("%d %d %d",&iNo1,&iNo2,&iNo3);

    Maximum = CheakMax(iNo1 ,iNo2,iNo3);
    printf("the maximum nuber will be : %d",Maximum);

    return 0;
}