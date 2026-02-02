import java.util.*;

class Logic 
{
    void Display(int ino)
    {
        int Digit = 0;
        while(ino>0)
        {
            Digit = ino%10;
            System.out.println("The Seperated Number will be:"+Digit);
            ino=ino/10;
        }
      
        
    }
}

class task_4
{
    public static void main(String C[])
    {
        int iNo;
        Scanner sobj = new Scanner(System.in);
        Logic lobj = new Logic();


        System.out.println("Enter the Number:");
        iNo = sobj.nextInt();
        lobj.Display(iNo);



    }
}