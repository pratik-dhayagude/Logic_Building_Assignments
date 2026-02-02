import java.util.*;
class Logic 
{
    void FindLargest(int iNo)
    {
        int iMax = 0;
        int iDigit = 0;
        while(iNo>0)
        {
         iDigit=iNo%10;
         if(iDigit>iMax)
         {
            iMax = iDigit;
         }
         iNo = iNo/10;
        }
        System.out.println(iMax+ " This is the maximum number");
      


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
        lobj.FindLargest(iNo);



    }
}