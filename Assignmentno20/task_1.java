import java.util.*;
class Logic 
{
    void SumEvenNumbers(int iValue)
    {
        int iCnt = 0;
        int iSum = 0;
        for(iCnt = 1;iCnt<=iValue;iCnt++)
        {
            if((iCnt%2)==0)
            {
                iSum = iSum+iCnt;
            }

        }
        System.out.println("The Sum of even numbers will be:"+iSum);
    }
}

class task_1
{
    public static void main(String A[])
    {
        int iNo=0;

        Scanner sobj = new Scanner(System.in);

        Logic lobj = new Logic();

        System.out.println("Enter the Number:\n");
        iNo = sobj.nextInt();
        lobj.SumEvenNumbers(iNo);


    }
}