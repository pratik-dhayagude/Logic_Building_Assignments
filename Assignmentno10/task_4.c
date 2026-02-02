#include<stdio.h>

double FhtoCs(float fNo)
{
    double celcius;

    celcius = (fNo-32)*(5.0/9.0);

    return celcius;

}

int main()
{
    float fNum = 0.0f;
    double dRet= 0.0;
    
    printf("Enter the Temperature in Fahrenhiet :\n");
    scanf("%f",&fNum);

    dRet = FhtoCs(fNum);
    printf("The temperature in celcius will be : %lf\n",dRet);
    return 0;
}