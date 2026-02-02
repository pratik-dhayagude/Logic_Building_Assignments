import java.util.*;

class Logic
{
    void Odd(int iNo)
    {
        int iCnt;
        for(iCnt=1;iCnt<=iNo;iCnt++)
        {
            if((iCnt%2)!=0)
            {
                System.out.print("\t"+iCnt);
            }
        }
    }
}

class task_3
{
    public static void main(String A[])
    {
        int i;
        Scanner sobj = new Scanner(System.in);
        Logic lobj = new Logic();

        System.out.println("Enter the number");
        i=sobj.nextInt();
        lobj.Odd(i);
    }
}