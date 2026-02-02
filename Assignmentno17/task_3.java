import java.util.*;
class Arithematic
{
    void GreaterSmaller(int iNo1,int iNo2)
    {
        if(iNo1>iNo2)
        {
            System.out.println("The greater number will be :"+iNo1);
        }
        else
        {
             System.out.println("The Greater number will be:"+iNo2);

        }
    }
}

class task_3
{
    public static void main(String A[])
    {
        int iValue1 = 0;
        int iValue2 = 0;

        Scanner sobj = new Scanner(System.in);
        Arithematic aobj = new Arithematic();

        System.out.println("Enter the first number");
        iValue1=sobj.nextInt();

        System.out.println("Enter the secnd number");
        iValue2=sobj.nextInt();

        aobj.GreaterSmaller(iValue1,iValue2);
    }
}
