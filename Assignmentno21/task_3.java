import java.util.*;
class Logic 
{
    void CountFactors(int iValue)
    {
        int iCnt = 0;
        int iCount = 0;
        for(iCnt=1;iCnt<=iValue/2;iCnt++)
        {
            if((iValue%iCnt)==0)
            {
                System.out.print(iCnt);
                iCount++;
            }
        }
        System.out.print("The Factors will be:"+iCount);
    }

}
class task_3
{
    public static void main(String A[])
    {
        int iNo=0;
        Scanner sobj = new Scanner(System.in);
        Logic lobj = new Logic();

        System.out.println("Enter the number:");
        iNo = sobj.nextInt();
        lobj.CountFactors(iNo);


    }
}