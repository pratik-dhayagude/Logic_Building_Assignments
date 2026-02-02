import java.util.*;

class Factorial
{
    void Factors(int iNo)
    {
        int iCnt =0;
        for(iCnt=1;iCnt<=iNo/2;iCnt++)
        {
            if((iNo%iCnt)==0)
            {
                System.out.println(+iCnt);
            }
       }
    }
}
class task_3
{
    public static void main(String A[])
    {
        int iValue = 0;
        Factorial fobj = new Factorial();
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter the number\n");
        iValue = sobj.nextInt();

        fobj.Factors(iValue);



    }
}