import java.util.*;

class Marvellous
{
    void Logic(int iNo)
    {
        if((iNo%5==0)&&(iNo%11)==0)
        {
            System.out.println("The Number is divisible");
        }
        else
        {
            System.out.println("The number is not divisible");
        }
    }
}

class task_3
{
    public static void main(String A[])
    {
        int i=0;

        Scanner sobj = new Scanner(System.in);
        Marvellous mobj = new Marvellous();

        System.out.println("Enter the number :");
        i = sobj.nextInt();
        mobj.Logic(i);
    }
}