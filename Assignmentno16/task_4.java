import java.util.*;
class Reverse
{
    void ReverseNumber(int iNo)
    {
        int iCnt = 0;
        for(iCnt=iNo;iCnt>=1;iCnt--)
        {
            System.out.println(iCnt);
        }
    }
}

class task_4
{
    public static void main(String A[])
    {
        int Num=0;
        Reverse obj = new Reverse();

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number:");
         Num = sobj.nextInt();
         obj.ReverseNumber(Num);






    
    }
}