#include<iostream>

using namespace std;

template<class T>


int DisplayFrequency(T *Arr , int iSize ,T NO)
{
   int i = 0;
   int iCnt =0;
    for(i = 0;i<=iSize;i++)
    {
        if(Arr[i]==NO)
        {
            iCnt++;
        }
    }
    return iCnt;
  
}

int main()
{

    int Arr[] = {10,20,30,10,30,40,10,40,10};
   
    int  iRet = DisplayFrequency(Arr,9,10);

    cout<<iRet;



    return 0;
}