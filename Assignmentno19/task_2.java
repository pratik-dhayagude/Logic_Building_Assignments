import java.util.Scanner;

class Marvellous
{
    void Gread(int iNo)
    {
        if(iNo<=100&&iNo>=70)
        {
            System.out.println("The Gread is: 'A' ");
        }
        else if(iNo<=50&&iNo>=20)
        {
            System.out.println("The gread is: 'B' ");
        }
        else 
        {
            System.out.println("The gread is: 'C' ");
        }
    }
}

class task_2
{
    public static void main(String A[])
    {
        int i;
        Scanner sobj = new Scanner(System.in);
        Marvellous lobj = new Marvellous();

        System.out.println("Enter the marks:");
        i=sobj.nextInt();

        lobj.Gread(i);


    }
}