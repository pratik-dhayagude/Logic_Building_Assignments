import java.util.*;

class Logic 
{
    void AdditionEvenOdd(int iNo)
    {
        int iCnt;
        int iSumEven=0;
        int iSumOdd=0;
        iCnt = iNo%10;
        
       for(iCnt=1;iCnt<iNo;iCnt++)
        {
            
            if((iCnt%2) == 0)
            {
                iSumEven = iSumEven+iCnt;

               
            }
            else
            {
                iSumOdd = iSumOdd+iCnt;
               

            }
         
        }
           iNo=iNo/10;
       
        System.out.println("The sum of even number is"+iSumEven);
        System.out.println("The sum of odd number is"+iSumOdd);

    }
}
class task_4
{
    public static void main(String A[])
    {
        int i = 0;
        Scanner sobj = new Scanner(System.in);
        Logic lobj = new Logic();
        System.out.println("Enter the Number:");
        i=sobj.nextInt();

        lobj.AdditionEvenOdd(i);



    }
}