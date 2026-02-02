import java.util.*;
class Logic 
{
    void PerfectNumber(int iValue)
    {
        int iCnt = 0;
        int iSum=0;
        for(iCnt=1;iCnt<=iValue/2;iCnt++)
        {
            if((iValue%iCnt)==0)
            {
                iSum = iSum + iCnt;
            }
            
        }
        if(iSum == iValue)
        {
            System.out.println(iSum+"The Number is perfect number");
        }
        else
        {
            System.out.println(iSum+"The number is not a perfect number");
        }
    }
}
class task_3
{
    public static void main(String A[])
    {
        int iNo = 0;
        Scanner sobj = new Scanner(System.in);
        Logic lobj = new Logic();

        System.out.println("Enter the number:");

        iNo = sobj.nextInt();
        lobj.PerfectNumber(iNo);


    }
}