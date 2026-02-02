import java.util.*;
class Logic 
{
    void FindLargest(int iNo)
    {
        int iSmall = iNo;
        int iDigit = 0;
        while(iNo>0)
        {
         iDigit=iNo%10;
         if(iDigit<iSmall)
         {
            iSmall = iDigit;
         }
         iNo = iNo/10;
        }
        System.out.println( " This is the Smaller number"+iSmall);
      


    }

}
class task_5
{
    public static void main(String A[])
    {
        int iNo = 0;
        Scanner sobj = new Scanner(System.in);
        Logic lobj = new Logic();

        System.out.println("Enter the number:");
        iNo = sobj.nextInt();
        lobj.FindLargest(iNo);



    }
}