#include<stdio.h>

void Display(char ch)
{
    
    if(ch > 'F')
    {
       return; 
    }
    printf("%c\t",ch);
    ch++;
    Display(ch);

}
int main()
{
    Display('A');

    return 0;
}