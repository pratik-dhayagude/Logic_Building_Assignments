import java.util.*;


class Pattern
{
    public void Display(int iNo)
    {
       int iCnt = 0;
       
       
       for(iCnt =1;iCnt<=iNo;iCnt++)
       {
        System.out.print("#\t");
        System.out.print(iCnt+"\t");
        System.out.print("*\t");
       }
    }
}

class program29
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