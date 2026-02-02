import java.util.*;

class Pattern
{
    public void Display(int iNo)
    {
       int iCnt = 0;
       
       for(iCnt =0;iCnt<=iNo;iCnt++)
        {
           char ch = (char)('A'+iCnt); 
           System.out.print(ch+"\t");
        } 
        System.out.println();

    }
}

class program26
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