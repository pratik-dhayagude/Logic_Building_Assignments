import java.util.*;
class Logic
{
    void PrintReverse(int iValue)
    {
        int iCnt = 0;
        int iDigit = 0;
        iDigit = iValue%10;
        for(iCnt = iValue;iCnt>=1;iCnt--)
        {
            System.out.println(iCnt);
        }
        iValue = iValue/10;
    }

}
class task_2
{
    public static void main(String A[])
    {
        int iNo = 0;
        Scanner sobj = new Scanner(System.in);
        Logic lobj = new Logic();

        System.out.println("Enter the number:");
        iNo = sobj.nextInt();
        lobj.PrintReverse(iNo);



    }
}