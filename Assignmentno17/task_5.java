import java.util.*;

class Logic 
{
    void Table(int iValue)
    {
        int iCnt = 0;
        for(iCnt =1;iCnt<=10;iCnt++)
        {
            System.out.print("\t"+iCnt*iValue);
        }
    }
}

class task_5
{
    public static void main(String A[])
    {
        int iNo=0;

        Scanner sobj = new Scanner(System.in);

        Logic lobj = new Logic();

        System.out.println("Enter the first number:");
        iNo = sobj.nextInt();

        lobj.Table(iNo);


    }
}

