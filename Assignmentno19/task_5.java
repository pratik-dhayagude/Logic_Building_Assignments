import java.util.*;
class Logic 
{
    void Display(int base,int degree)
    {
        int iCnt = 0;
        int iSum=1;
        for(iCnt=0;iCnt<degree;iCnt++)
        {
            iSum = iSum*base; 

        }
        System.out.println("The Degree will be:"+iSum);
    }
}


class task_5
{
    public static void main(String A[])
    {
        int i =0;
        int j=0;

        Scanner sobj = new Scanner(System.in);
        Logic lobj = new Logic();

        System.out.println("Enter the base:");
        i=sobj.nextInt();

        System.out.println("Enter the degree:");
        j=sobj.nextInt();

        lobj.Display(i,j);

    }
}