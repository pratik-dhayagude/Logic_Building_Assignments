import java.util.*;

class Logic 
{
    void LeepYear(int no)
    {
        if(no%4==0)
        {
            System.out.println("The given year is leep year");
        }
        else
        {
            System.out.println("The given year is not a leep year");
        }
    }
}
class task_1
{
    public static void main(String B[])
    {
        int i;

        Scanner sobj = new Scanner(System.in);
        Logic lobj = new Logic();

        System.out.println("Enter the year:");
        i=sobj.nextInt();
        lobj.LeepYear(i);

    }
}