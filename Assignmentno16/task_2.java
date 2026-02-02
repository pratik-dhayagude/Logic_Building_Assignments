import java.util.*;
class logic
{
    void CheakEvenOdd(int iNum)
    {
        if((iNum%2)==0)
        {
            System.out.println("Number is even\n");
        }
        else
        {
            System.out.println("Number is odd\n");
        }
    }
}
class task_2
{
    public static void main(String A[])
    {
        int Number;
        logic lobj = new logic();
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number");
        Number= sobj.nextInt();

        lobj.CheakEvenOdd(Number);

    }
}