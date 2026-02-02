#include<stdio.h>
void Table(int iValue)
{
    int iCnt = 0;

    for(iCnt=1;iCnt<=10;iCnt++)
    {
      
      printf("%d\t",iValue*iCnt);
        

    }
  

}

int main()
{
    int iNo = 0;
    printf("Enter the number : \n");
    scanf("%d",&iNo);
     Table(iNo);

  


    return 0;
}