import java.util.*;

class Arithematic
{
    void Palindrom(int iNo)
    {
        
        int temp = iNo;
        int rev =0;
        while(iNo!=0)
        {
            rev = rev*10+(iNo%10);
            iNo = iNo/10;
        }
        if(temp == rev)
        {
            System.out.println("the number is palindrom");
        }
        else
        {
            System.out.println("the number is not palindrom");

        }

    }
}

class task_2
{
    public static void main(String A[])
    {
        int iValue =0;
        Scanner sobj = new Scanner(System.in);
        Arithematic aobj = new Arithematic();

        System.out.println("Enter the number:");
        iValue=sobj.nextInt();
        aobj.Palindrom(iValue);


    }
}