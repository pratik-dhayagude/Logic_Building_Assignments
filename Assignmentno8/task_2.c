#include<stdio.h>
void Display(int Number)
{
    if(Number>0 && Number<10)
    {
        if(Number==1)
        {
            printf("one");
        }
        else if(Number == 2)
        {
            printf("Two");
        }
        else if(Number == 3)
        {
            printf("Three");
        }
        else if(Number == 4)
        {
            printf("Four");
        }
        else if(Number == 5)
        {
            printf("Five");

        }
        else if(Number == 6)
        {
            printf("Six");

        }
         else if(Number == 7)
         {
              printf("Seven");

         }
        else if(Number == 8)
        {
              printf("Eight");

        }
        else if(Number == 9)
        {
              printf("Nine");

        }
        else 
        {

            printf("Invalid Number\n");
        }


    }

}

int main()
{
    int iNo = 0;
    printf("Enter the number\n");
    scanf("%d",&iNo);
    Display(iNo);

    return 0;
}