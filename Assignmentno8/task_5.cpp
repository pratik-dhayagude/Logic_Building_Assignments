#include<iostream>

using namespace std;

class Table
{
    public:
    int iNo;

    int iCnt = 0;
    void Display(int No)
    {
        for(iCnt = 10;iCnt>=1;iCnt--)
        {
            printf("%d\t",iCnt*No);
        }
    }
};

int main()
{
    Table tobj;


    int Number;
    cout<<"Enter the number\n";
    cin>>Number;
    tobj.Display(Number);

    return 0;
}
