#include<stdio.h>

void Display(int iNo)
{
  
   static char i = 'A';
   
   if(iNo == 0)
   {
     return;
     
   }
    printf("%c\t",i);
    i++;
    Display(iNo-1);
  

}

int main()
{
    int iValue = 0;
    printf("Enter the Number:\n");
    scanf("%d",&iValue);
    Display(iValue);

    return 0;
}