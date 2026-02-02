#include<iostream>

using namespace std;

template<class T>

void Display(T no , int iSize)

{
   
    int iCnt = 0;
    for(iCnt = 0;iCnt<iSize;iCnt++)
    {
        cout<<no<<"\t";
    }
    cout<<"\n";
  
}

int main()
{

    Display(11,3);
    Display('M',7);
    Display(3.7,8);

    return 0;
}