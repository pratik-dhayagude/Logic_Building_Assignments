#include<stdio.h>
double DisplayArea(float length,float weidth)
{
    double Area = 0.0;

    Area = length * weidth;

    return Area;

}

int main()
{
    float length,weidth,dRet;

    printf("Enter the legth:\n");
    scanf("%f",&length);

    printf("Enter the weidth:\n");
    scanf("%f",&weidth);

    dRet = DisplayArea(length,weidth);

    printf("Area of the rectangle is : %.3lf",dRet);

    return 0;
}