import java.util.*;

class Pattern
{
    public void Display(int iNo)
    {
       int iCnt = 0;
       
       for(iCnt =iNo;iCnt>=1;iCnt--)
       {
        System.out.print(iCnt+" #\t");
       }
    }
}

class program27
{
    public static void main(String A[])
    {
        int iValue = 0;
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the Number:");
        iValue = sobj.nextInt();
        Pattern pobj = new Pattern();
        pobj.Display(iValue);
    }
}