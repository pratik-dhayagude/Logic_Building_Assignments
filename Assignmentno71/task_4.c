#include<stdio.h>

int SmallDig(int iValue)
{
    
    int iDigit =0;
    int Small = 0;
    if(iValue == 0 )
    {
        return 9;
    }
    iDigit = iValue%10;
    Small = SmallDig(iValue/10);
    if(iDigit < Small)
    {
        return iDigit;
    }
    else
    {
        return Small;
    }

    

}
int main()
{
    int iNo = 0 ;
    int iRet = 0;
    printf("Enter the number:\n");
    scanf("%d",&iNo);

    iRet = SmallDig(iNo);
    printf("The largest digit is :%d\n",iRet);

    return 0;
}