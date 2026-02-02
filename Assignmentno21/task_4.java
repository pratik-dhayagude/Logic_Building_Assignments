import java.util.*;
class Logic
{
    void Divisible(int no)
    {
        int iCnt=0;
        int iCount=0;
        for(iCnt=1;iCnt<=no;iCnt++)
        {
            if(((iCnt%2)==0)&&(((iCnt%3)==0)))
            {
                iCount++;
            }
        }
        System.out.println("The number which is divisible by 2 and 3 is: "+iCount);
    }
}

class task_4
{
    public static void main(String A[])
    {
        int iNo = 0;
        Scanner sobj = new Scanner(System.in);
        Logic lobj = new Logic();

        System.out.println("Enter the number:");
        iNo = sobj.nextInt();
        lobj.Divisible(iNo);




    }
}