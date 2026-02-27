import java.util.*;

class program799
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int Unit = 0;
        int Bill = 0 ;

        System.out.println("Enter the unit that we used");
        Unit = sobj.nextInt();

        if(Unit < 0)
        {
            System.out.println("Invalid Input");
            return;
        }

        if(Unit == 100)
        {
            Bill = Unit * 5;
        }
        else if(Unit > 101 && Unit < 200)
        {
           Bill = 500 + ((Unit-100)*7);

        }
        else if(Unit > 200)
        {
            Bill = 500 + 700 + ((Unit - 200)*10);
            
        }
        System.out.println("Amount Will be:"+Bill);
        System.out.println("Total Unit Consumed"+Unit);
        sobj.close();

    }
}