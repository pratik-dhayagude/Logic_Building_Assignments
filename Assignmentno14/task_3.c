#include<stdio.h>

int ChkZero(int iNo)
{
    
    int iDigit = 0; 
    int iCount=0;
    while(iNo!=0)
    {
        iDigit = iNo%10;

        if(iDigit==2)
        {
           iCount++;

        }
        iNo=iNo/10;
        
    }
    return iCount;
   

}

int main()
{
    int iValue=0,iRet=0;
    

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    iRet = ChkZero(iValue);
    printf("\nThe Frequency count is :%d\n",iRet);

    return 0;
}