///////////////////////////////////////////
//
//   Hedder File Inclusion
//
//////////////////////////////////////////

#include<stdio.h>
////////////////////////////////////////////////////////////////////////
//
//    Function Name : PrintEven
//    Description :   It is used to display the even numbers
//    Author :        Pratik Dhananjay Dhayagude
//    Date :          
//
////////////////////////////////////////////////////////////////////////
void PrintEven(int iNo)
{
    int iCnt = 0;
    int iNum = 2;
    if(iNo <= 0)
    {
        return;

    }
    for(iCnt = 1;iCnt<=iNo;iCnt++)
    {
       printf("%d\t",iNum);
       iNum = iNum + 2;

    }

}
///////////////////////////////////////////
//
//  Entry pont function
//
//////////////////////////////////////////
int main()
{

    int iValue = 0;
    printf("Enter they number\n");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}