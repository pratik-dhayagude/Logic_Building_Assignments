#include<iostream>

using namespace std;

template<class T>


int FirstAccouance(T *Arr , int iSize ,T No)
{
   int i = 0;
   int iCnt =0;
    for(i = 0;i<=iSize;i++)
    {
        if(Arr[i]==No)
        {
            return i - 1;
        }
    }
    return -1;  // if they value not found
  
}

int main()
{

    int Arr[] = {10,20,30,10,30,40,10,40,10};
   
    int  iRet = FirstAccouance(Arr,9,40);

    cout<<iRet;



    return 0;
}