import java.util.*;

class Logic
{
    void FindMin(int iNo1,int iNo2,int iNo3)
    {

        if(iNo1<iNo2&&iNo1<iNo3)
        {
            System.out.println("The Minimum number is :"+iNo1);
        }
        else if(iNo2<iNo1&&iNo2<iNo3 )
        {
             System.out.println("The Minimum number is :"+iNo2);

        }
        else 
        {
             System.out.println("The Minimum number is :"+iNo3);
        }

    }
}

class task_4
{
    public static void main(String A[])
    {
        int iValue1 = 0;
        int iValue2 = 0;
        int iValue3 = 0;

        Scanner sobj = new Scanner(System.in);
        Logic lobj = new Logic();

        System.out.println("Enter the first number:");
        iValue1=sobj.nextInt();

        System.out.println("Enter the second number:");
        iValue2=sobj.nextInt();

        System.out.println("Enter the third number:");
        iValue3=sobj.nextInt();

        lobj.FindMin(iValue1,iValue2,iValue3);




    }
}