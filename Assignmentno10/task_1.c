#include<stdio.h>
double DisplayArea(float radius)
{
     double Area=0.0;
     Area = 3.14*radius *radius;

     return Area;
    
}
int main()
{
    float dNo=0.0f;
    double dRet = 0.0;
    printf("Enter the radius :\n");
    scanf("%f",&dNo);
    dRet = DisplayArea(dNo);
    printf("Area of the circle is :%lf\n",dRet);

    return 0;
}