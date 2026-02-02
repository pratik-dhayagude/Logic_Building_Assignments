import java.util.*;
class Arithematic
{
    void CountNumbers(int iNum)
    {
        int iCnt = 0;
        int iCount= 0;
        for(iCnt =1;iCnt<=iNum;iCnt++)
        {      
          iCount++;
          iNum = iNum/10;
        }
        System.out.println("Count is:"+iCount);   
    }
}


class task_5
{
    public static void main(String A[])
    {
        int iNo=0;
        Arithematic aobj = new Arithematic();
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the numbers:");
        iNo = sobj.nextInt();
        aobj.CountNumbers(iNo);


    }
}