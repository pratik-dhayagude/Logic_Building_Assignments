import java.util.*;

class Arithematic
{
    void DisplaySum(int iNo)
    {
      int iSum = 0;

      while(iNo!=0)
      {
        iSum = iSum+(iNo%10);
        iNo=iNo/10;

      }
      System.out.println("Addition is:"+iSum);

    }
}
class task_1
{
    public static void main(String A[])
    {
        int iValue=0;
       
        Scanner sobj = new Scanner(System.in);
        Arithematic aobj = new Arithematic();
       
        System.out.println("Enter the numbers:");
        iValue = sobj.nextInt();

        aobj.DisplaySum(iValue);



    }
}