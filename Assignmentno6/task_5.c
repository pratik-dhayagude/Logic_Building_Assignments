#include<stdio.h>
float Persentage(int itotal,int iobtained)
{
    float fAns = 0.0f;

    if(itotal == 0)
    {
        return 0.0;
    }

    fAns = ((float)iobtained/(float)itotal * 100);
    return fAns;

}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0;

    printf("Please enter the total marks :\n");
    scanf("%d",&iValue1);

    printf("Please enter the obtained marks :\n");
    scanf("%d",&iValue2);

    fRet = Persentage(iValue1,iValue2);

    printf("The persentage of marks is :%.1f%%",fRet);  //.1 meaning how many digits written after they decimal point


    return 0;
}