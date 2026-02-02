#include<stdio.h>

double FhtoCs(float fNo)
{
    double squarefeet;

    squarefeet = fNo*0.0929;

    return squarefeet;

   

}

int main()
{
    float fNum = 0.0f;
    double dRet= 0.0;
    
    printf("Enter the area in square feet :\n");
    scanf("%f",&fNum);

    dRet = FhtoCs(fNum);
    printf("The are in square meter is  : %lf\n",dRet);
    return 0;
}