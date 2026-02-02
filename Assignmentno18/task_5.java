import java.util.*;
class Logic
{
    void PosNevZero(int iNo)
    {
        if(iNo>0)
        {
            System.out.println("The number is positive");
        }
        else if(iNo<0)
        {
            System.out.println("The number is negative");
        }
        else
        {
            System.out.println("The number is zero");
        }
    }
}

class task_5

{
    public static void main(String A[])
    {
        int i;
        Scanner sobj = new Scanner(System.in);
        Logic lobj = new Logic();
        System.out.println("Enter the number");
        i = sobj.nextInt();
        lobj.PosNevZero(i);
    }
}