import java.util.*;
class Logic
{
    void Factors(int no)
    {
        int iCnt=0;
        for(iCnt = 1 ;iCnt<=no/2;iCnt++)
        {
            if((no%iCnt)==0)
            {
                System.out.println(iCnt);
            }
        }
    }
}
class task_2
{
    public static void main(String A[])
    {
        int iNo = 0;
        Scanner sobj = new Scanner(System.in);
        Logic lobj = new Logic();

        System.out.println("Enter the value:");
        iNo = sobj.nextInt();
        lobj.Factors(iNo);



    }
}