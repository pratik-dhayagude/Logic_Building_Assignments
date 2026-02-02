import java.util.*;
class Logic 
{
    void Display(int iValue)
    {
        int iCnt = 0;
        int iCountEven =0;
        int iCountOdd = 0;
        for(iCnt = 1; iCnt<=iValue;iCnt++)
        {
            if((iCnt%2)==0)
            {
              iCountEven++;
            }
            else
            {
             iCountOdd++;   
            }
        }
        System.out.println("The Even numbers is"+iCountEven);
         System.out.println("The Even numbers is"+iCountOdd);

      
        
    }
}
class task_1

{
    public static void main(String A[])
    {
        int iNo = 0;
        Scanner sobj = new Scanner(System.in);
        Logic lobj = new Logic();

        System.out.println("Enter the number");
        iNo = sobj.nextInt();
        lobj.Display(iNo);


    }
}